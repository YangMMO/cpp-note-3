#include <iostream>
using namespace std;
#include <string>

/* ���麯���ͳ����� */

class Base {
public:
	// �麯����Ϊ���麯������Ϊ������
	// ����д{} ����Ϊ = 0;
	// �ص㣺
	// 1. �޷�ʵ��������
	// 2. ���������������д����Ĵ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;
};


class Son : public Base {
public:
	void func() {
		cout << "fun" << endl;
	}
};

//void doSpeak(Animal& animal) {
//	animal.speak();
//}

void test01() {
	//Base b;	// ��������ʵ�������麯��
	//new Base; //����

	//Son s;	// ����д���麯���򱨴�

	Son s;	// ��д���ʵ����
	s.func();

	// �����ָ��ָ���������
	Base * base = new Son;
	base->func();
	delete base;
}


int main() {

	test01();

	system("pause");
	return 0;
}