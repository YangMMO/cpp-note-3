#include <iostream>
using namespace std;
#include <string>

/* ��ʼ���б� */

class Person {
public:
	// ��ͳ��ʼ������
	//Person(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	// ��ʼ���б��ʼ������
	//Person() :m_A(10), m_B(20), m_C(30) {
	//	
	//}
	
	// ��Ӹ�ֵ
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