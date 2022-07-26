#include <iostream>
using namespace std;
#include <string>

/* �������캯������ʱ�� */

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

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	Person p1(20);
	Person p2(p1);

	cout << "p2 age = " << p2.m_Age << endl;
}

// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p) {
	
}
void test02() {
	Person p;
	doWork(p);	// ʵ�δ��ݸ�doWork�βλ´����������һ���µĸ����������doWork���޸�p��ֵ������ı�test02��p��ֵ����Ϊ��һ���µ���ʱ����
}


// 3. ��ֵ��ʽ���ؾֲ�����
Person doWork2() {
	Person p1;	// �ֲ�����Ҳ�´��һ���µĶ�����з���
	cout << (int*)&p1 << endl;
	return p1;	// ���ص���һ������������ı�doWork2��p1��ֵ
}
void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;
}


int main() {

	test01();

	test02();

	test03();	// cout��ַ��һ��

	system("pause");
	return 0;
}