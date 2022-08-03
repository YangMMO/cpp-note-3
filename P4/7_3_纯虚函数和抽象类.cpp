#include <iostream>
using namespace std;
#include <string>

/* 纯虚函数和抽象类 */

class Base {
public:
	// 虚函数改为纯虚函数，称为抽象类
	// 无需写{} ，改为 = 0;
	// 特点：
	// 1. 无法实例化对象
	// 2. 抽象类子类必须重写父类的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};


class Son : public Base {
public:
	void func() {
		cout << "fun" << endl;
	}
};

//void doSpeak(Animal& animal) {
//	animal.speak();
//}

void test01() {
	//Base b;	// 报错，不可实例化纯虚函数
	//new Base; //报错

	//Son s;	// 不重写纯虚函数则报错

	Son s;	// 重写后可实例化
	s.func();

	// 父类的指针指向子类对象
	Base * base = new Son;
	base->func();
	delete base;
}


int main() {

	test01();

	system("pause");
	return 0;
}