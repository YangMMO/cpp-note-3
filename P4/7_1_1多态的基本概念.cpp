#include <iostream>
using namespace std;
#include <string>

/* 多态的基本概念 */

class Animal {
public:
	// virtual 虚函数
	// 重新执行test01则发生地址晚绑定
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


class Cat : public Animal {
public:
	// 重写 （函数返回值类型 函数名称 参数列表） 完全相同
	void speak() {
		cout << "Cat speak" << endl;
	}
};

// 执行说话函数
// Animal & animal = cat; 父类的引用指向子类对象
// C++中允许父子的类型转换，不需要做强制类型转换
// 地址早绑定，在编译阶段就能确定函数地址，因为现在是一个Animal对象，无论传任何对象，都走Animal的speak函数
// 如果想执行其他对象的speak，函数地址就不能提前绑定，需在运行阶段进行绑定，也就是【地址晚绑定】

// 动态多态的满足条件：
// 1. 继承关系
// 2. 子类重写父类虚函数

// 动态多态使用
// 父类的指针或引用 指向子类对象 （即： Animal &animal = 子类对象）

void doSpeak(Animal &animal) {	
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);	// Animal speak ，原因：地址早绑定

	Dog dog;
	doSpeak(dog);	// Dog speak
}

int main() {

	test01();

	system("pause");
	return 0;
}