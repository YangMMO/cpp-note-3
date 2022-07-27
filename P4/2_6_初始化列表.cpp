#include <iostream>
using namespace std;
#include <string>

/* 初始化列表 */

class Person {
public:
	// 传统初始化操作
	//Person(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	// 初始化列表初始化属性
	//Person() :m_A(10), m_B(20), m_C(30) {
	//	
	//}
	
	// 添加赋值
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	}
	
	int m_A;
	int m_B;
	int m_C;
};

void test01() {
	//Person p(10, 20, 30);
	//Person p;
	Person p(10, 20, 30);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}