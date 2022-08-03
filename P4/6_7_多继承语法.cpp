#include <iostream>
using namespace std;
#include <string>

/* 多继承语法 */

class Base1 {
public:
	Base1() {
		m_A = 100;
	}
	int m_A;
};

class Base2 {
public:
	Base2() {
		m_B = 200;
	}
	int m_B;
};

class Son:public Base1, public Base2 {	//继承多个父类
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01() {
	Son s;

	cout << "sizeof s = " << sizeof(s) << endl;	// 16 4*4

	// 注意;假设 BASE1 与BASE2 出现同名属性，即出现二义性，则需要再访问的时候加作用域
	// 所以一般来说不建议使用多继承
	cout << "Son m_A = " << s.Base1::m_A<< endl;	// 100
	cout << "Son m_B = " << s.Base2::m_B << endl;	// 200
	cout << "Son m_C = " << s.m_C << endl;	// 300
	cout << "Son m_D = " << s.m_D << endl;	// 400
}


int main() {

	test01();

	system("pause");
	return 0;
}