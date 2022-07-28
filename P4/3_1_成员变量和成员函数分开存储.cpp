#include <iostream>
using namespace std;
#include <string>

/* 成员变量和成员函数分开存储 */

class Person {
	int m_A;	// 非静态成员变量,因为非空对象，所以占4字节
	static int m_B;	// 静态成员变量，因为静态不属于类对象上的 所以还是4字节

	void func() {	// 非静态成员函数，与成员变量不同，不属于类的对象上，所以还是4字节
	}

	void func2() {	// 静态成员无论属性还是函数都只有一份，不属于类的对象上，所以还是4字节
	}
};

int Person::m_B = 0;	

void test01() {
	Person p;
	// 空对象占用内存空间为：1
	// C++编译器会给每个空对象分配一个字节空间，是为了区分空对象的占内存的位置
	// 每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02() {
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}