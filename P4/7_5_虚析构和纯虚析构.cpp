#include <iostream>
using namespace std;
#include <string>

/* 虚析构和纯虚析构 */

class Animal {
public:
	Animal() {
		cout << "Animal()" << endl;
	}
	
	// 加 virtual  转为虚析构 
	//virtual ~Animal() {
	//	cout << "~Animal() 虚析构" << endl;
	//}

	// 纯虚析构，默认会报错，因为没有具体实现（注意：虚析构 和 纯虚析构 都要声明 与 代码实现）
	// 有了纯虚析构，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;
	
	virtual void speak() = 0;
	
};

// 这是Animal 纯虚析构 实现
Animal::~Animal() {
	cout << "~Animal() 纯虚析构" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat()" << endl;
		m_Name = new string(name);
	}
	
	void speak() {
		cout << * m_Name << " Meow!" << endl;
	};

	~Cat() {
		if (m_Name != NULL) {
			cout << "~Cat()" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	
	string * m_Name;
};

void test01() {
	Animal * animal = new Cat("Tom");
	animal->speak();
	
	// 父类指针在析构时不会调用子类析构，从而导致子类如果有堆区属性，出现了内存泄露情况
	// 解决办法：在父类中将析构转为虚析构
	delete animal;
}

int main() {

	test01();

	system("pause");
	return 0;
}