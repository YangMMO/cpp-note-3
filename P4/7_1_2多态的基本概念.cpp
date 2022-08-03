#include <iostream>
using namespace std;
#include <string>

/* 多态的基本概念 */

class Animal {
public:
	// Animal 内部包含 vfptr(虚函数指针 或 虚函数表指针)
	// v - virtual
	// f - function
	// ptr - pointer
	// vfptr 指向 vftable (虚函数表)
	// 表内记录虚函数地址（& Animal::speak）
	virtual void speak() {
		cout << "Animal speak" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "Dog speak" << endl;
	}
};

// Cat 内部包含 vfptr(虚函数指针 或 虚函数表指针)
// vfptr 指向 vftable (虚函数表)
// 如果是继承关系（重写前）：表内记录虚函数地址（& Animal::speak）
// 如果发生重写父类的虚函数，子类的虚函数表会替换成子类的虚函数地址（& Cat::speak）

// 所以当父类的指针或引用指向子类对象，就发生多态 Aaimal & animal = cat;
// 即在执行animal.speak()时，会在Cat的vftable中寻找函数，也就是运行阶段发生【动态的多态】
class Cat : public Animal {
public:
	void speak() {
		cout << "Cat speak" << endl;
	}
};


void doSpeak(Animal& animal) {
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02() {
	// 占用1字节, 因为只有非静态成员变量才属于类对象上，默认空对象 = 1；
	// 当函数加上virtual后 = 4（指针 = 4字节， 64位显示8字节，编译器默认x86即32位 = 4）
	cout << "sizeof Animal = " << sizeof(Animal) << endl;	
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}