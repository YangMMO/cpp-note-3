#include <iostream>
using namespace std;
#include <string>

/* 继承同名静态成员处理方式 */

class Base {
public:
	static int m_A;
	
	static void func() {
		cout << "Base::func()" << endl;
	}
	static void func(int a) {
		cout << "Base::func(int a)" << endl;
	}
};

int Base::m_A = 100;	// 类外初始化为100；

class Son: public Base {
public:
	static int m_A;
	
	static void func() {
		cout << "Son::func()" << endl;
	}
};

int Son::m_A = 200;

// 同名静态属性
void test01() {
	// 1.第一种访问方式，通过对象访问
	Son s;
	cout << "s.m_A = " << s.m_A << endl;
	cout << "s.Base::m_A = " << s.Base::m_A << endl;

	// 2. 通过类名访问
	cout << "Son::m_A = " << Son::m_A << endl;
	cout << "Base::m_A = " << Base::m_A << endl;
	// 写法说明： 通过类名作用:: 访问父类作用域下:: 的成员
	cout << "Son::Base::m_A = " << Son::Base::m_A << endl;
}

// 同名静态函数
void test02() {
	// 1. 通过对象访问
	Son s;
	s.func();
	s.Base::func();

	// 2. 通过类名
	Son::func();
	Son::Base::func();


	// 注意：子父出现同名，也会隐藏父类所有同名（包含父类的重载），都需加作用域
	Son::Base::func(100);
}


int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}