#include <iostream>
using namespace std;
#include <string>

/* ��̬��Ա���� */

class Person {
public:
	//�� ���ж�����ͬһ������
	//�� �ڱ���׶η����ڴ�
	//�� ���������������ʼ��
	static int m_A;

	// ��̬��Ա����Ҳ�з���Ȩ��
private:
	static int m_B;
};

// �൱�����������������������ĳ�ʼ��
int Person::m_A = 100;

int Person::m_B = 200;

void test01() {
	Person p;
	cout << p.m_A << endl;	// 100

	Person p2;
	p2.m_A = 200;
	
	cout << p.m_A << endl;	// 200
}

void test02() {
	// ��̬��Ա����������ĳ�������ϣ����ж�����ͬһ������
	// ��˾�̬��Ա���������ַ��ʷ�ʽ
	
	// 1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;	// 100

	// 2.ͨ���������з���
	cout << Person::m_A << endl;	// 100

	//cout << Person::m_B << endl;	// ������Ϊ��˽�����ԣ������޷�����
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}