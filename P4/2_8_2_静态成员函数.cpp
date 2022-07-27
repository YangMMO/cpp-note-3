#include <iostream>
using namespace std;
#include <string>

/* 静态成员函数 */

class Person {
public:
	//○ 所有对象共享同一个函数
	//○ 静态成员函数只能访问静态成员变量
	static void func() {
		m_A = 100;	// 静态成员访问静态变量
		//m_B = 200;	// 报错，因为非静态成员变量不是共享同一份数据，所以必须创建对象，但静态函数static在内存中只有一份，无法区分是哪个对象的m_B
		cout << "static func()" << endl;
	}
	
	static int m_A;
	int m_B;	// 非静态成员变量


	// 静态成员函数也有访问权限
private:
	static void func2() {
		cout << "static func2()" << endl;
	}
};

int Person::m_A = 0;

void test01() {
	// 两种访问方式
	// 1. 通过对象访问
	Person p;
	p.func();

	// 2. 通过类名访问
	Person::func();

	//Person::func2();	// 报错，因为私有，类外访问不到类内私有成员函数
}


int main() {

	test01();
	
	system("pause");
	return 0;
}