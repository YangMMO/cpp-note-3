#include <iostream>
using namespace std;
#include <string>

/* �Ӻ���������� */

// 1. ͨ����Ա��������+��
class Person {
public:
	// ͨ�� operator+ ���س�Ա���� +��
	Person operator+ (Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};

// 2. ͨ��ȫ�ֺ�������+��
Person operator+ (Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
};

// ��������
Person operator+ (Person& p1, int num) {
Person temp;
temp.m_A = p1.m_A + num;
temp.m_B = p1.m_B + num;
return temp;
};

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	
	Person p2;
	p2.m_A = 20;
	p2.m_B = 20;
	
	Person p3 = p1 + p2;	// Ĭ�ϱ�����Ϊ���������� Person + Person �޷����㣬��������+������������
	cout << p3.m_A << " " << p3.m_B << endl;

	// ��Ա�������صı��ʵ���
	Person p4 = p1.operator+(p2);

	// ȫ�ֺ������صı��ʵ���
	Person p5 = operator+(p1, p2);
	
	// ��������� Ҳ���Է�����������
	Person p6 = p1 + 10;
}

int main() {

	test01();

	system("pause");
	return 0;
}