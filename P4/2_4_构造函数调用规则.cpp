#include <iostream>
using namespace std;
#include <string>

/* ���캯�����ù��� */

//Ĭ������£�c++���������ٸ�һ�������3������
//1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2��Ĭ����������(�޲Σ�������Ϊ��)
//3��Ĭ�Ͽ������캯���������Խ���ֵ����

//�� ����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//�� ����û����忽�����캯����c++�������ṩ�������캯��(д�˿���ûд�޲��вεĻ��ᱨ��)

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
	//Person p;	// ������Ϊ�ṩ���вΣ����ṩ�޲�
	Person p(28);	// ��ȷ

	Person p2(p);
	cout << "p2 age = " << p2.m_Age << endl;
}


int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}