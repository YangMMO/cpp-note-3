#include <iostream>
using namespace std;
#include <string>

/* 拷贝构造函数调用时机 */

class Person {
public:
	Person() {
		cout << "Person()" << endl;
	}

	Person(int age) {
		m_Age = age;
		cout << "Person(int age)" << endl;
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "Person(const Person& p)" << endl;
	}
	
	~Person() {
		cout << "~Person()" << endl;
	}

	int m_Age;
};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);

	cout << "p2 age = " << p2.m_Age << endl;
}

// 2. 值传递的方式给函数参数传值
void doWork(Person p) {
	
}
void test02() {
	Person p;
	doWork(p);	// 实参传递给doWork形参会拷贝（创建）一个新的副本，如果在doWork中修改p的值，不会改变test02里p的值，因为是一个新的临时副本
}


// 3. 以值方式返回局部对象
Person doWork2() {
	Person p1;	// 局部对象也会拷贝一个新的对象进行返回
	cout << (int*)&p1 << endl;
	return p1;	// 返回的是一个副本，不会改变doWork2里p1的值
}
void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;
}


int main() {

	test01();

	test02();

	test03();	// cout地址不一样

	system("pause");
	return 0;
}