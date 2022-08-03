#include <iostream>
using namespace std;
#include <string>

/* 继承同名成员处理方式 */

class Base {
public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base::func()" << endl;
	}

	void func(int a) {
		cout << "Base::func(int a)" << endl;
	}
	
	int m_A;
};

class Son :public Base {
public:
	Son() {
		m_A = 200;
	}

	void func() {
		cout << "Son::func()" << endl;
	}
	
	int m_A;
};

void test01() {
	Son s;
	
	cout << "Son m_A = " << s.m_A << endl;	// 访问子类自身的m_A;
	
	cout << "Base m_A = " << s.Base::m_A << endl;	//访问父类的m_A;
}

void test02() {
	Son s;

	s.func();	// 当子类没有重名，则调用父类的func，当子类有func时，则调用自身的func

	s.Base::func();	// 调用父类的func

	//s.func(100)	//报错，当子类出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名函数
	s.Base::func(100);	//只有加作用域才能生效同名重载
}


int main() {

	test01();

	test02();

	system("pause");
	return 0;
}