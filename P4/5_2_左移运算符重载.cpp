#include <iostream>
using namespace std;
#include <string>

/* 左移运算符重载 */

class Person {
	// 此处如果是私有属性，则需要用到友元
	friend ostream& operator<< (ostream& cout, Person p);

public:
	Person (int a, int b) {
		m_A = a;
		m_B = b;
	}
	
private:
	// 通过 operator<< 重载成员函数 <<
	// void operator<< (Person &p) 是错误的，因为会变成p.operator<<(p)
	// 如初传入的是 cout 则会变成 p << cout; cout在右边，这是不正确的，所以不会给<<写在成员函数
	//void operator<< (cout) {
	//	return;
	//}
	int m_A;
	int m_B;
};

// 全局重载 <<
// 本质是: operator<<(cout,p)
// 简化是: cout << p;
// 默认cout会报错，可以双击cout，然后右键查看定义，可以查出是ostream对象，即[o][stream](输出)(流),因为输出流只有一个，所以需要给cout加&引用
ostream & operator<< (ostream &cout, Person p) {
	// 引用的本质是起别名，所以可以把形参 &cout 改为 &out 也可以
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
	// 因为链式调用原因，如果要继续调用<< endl;则需要返回cout;
	// 而函数返回值应该是ostream & 引用；
	return cout;
	
}

void test01() {
	Person p(10,30);
	//p.m_A = 10;
	//p.m_B = 20;

	cout << p << endl;	// 报错，没有与之操作的匹配 "<<"运算符
}

int main() {

	test01();

	system("pause");
	return 0;
}