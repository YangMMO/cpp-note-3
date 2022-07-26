#include <iostream>
using namespace std;
#include <string>

/* 构造函数调用规则 */

//默认情况下，c++编译器至少给一个类添加3个函数
//1．默认构造函数(无参，函数体为空)
//2．默认析构函数(无参，函数体为空)
//3．默认拷贝构造函数，对属性进行值拷贝

//● 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//● 如果用户定义拷贝构造函数，c++不会再提供其他构造函数(写了拷贝没写无参有参的话会报错)

class Person {
public:
	//Person() {
	//	cout << "Person()" << endl;
	//}

	//Person(int age) {
	//	m_Age = age;
	//	cout << "Person(int age)" << endl;
	//}

	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "Person(const Person& p)" << endl;
	}

	~Person() {
		cout << "~Person()" << endl;
	}

	int m_Age;
};

//void test01() {
//	Person p;
//	p.m_Age = 18;
//	
//	Person p2(p);
//
//	cout << "p2 age = " << p2.m_Age << endl;
//}

void test02() {
	//Person p;	// 报错，因为提供了有参，则不提供无参
	Person p(28);	// 正确

	Person p2(p);
	cout << "p2 age = " << p2.m_Age << endl;
}


int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}