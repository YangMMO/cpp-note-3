#include <iostream>
using namespace std;

/* ��װ����� */

/* ����Ȩ�� */
// ����Ȩ�� public			��Ա�� ���� & ���� �ɷ���
// ����Ȩ�� protected		��Ա�� ���ڿɷ��� & ���ⲻ���Է��� & ������Է��ʸ���ı�������
// ˽��Ȩ�� private			��Ա�� ���ڿɷ��� & ���ⲻ���Է��� ! ���಻���Է��ʸ����˽������

class Person {
public:
	string m_Name;
	
protected:
	string m_Car;

private:
	int m_Password;
	
	
public:
	void func() {
		m_Name = "����";
		m_Car = "����";
		m_Password = 123456;
	}
};

int main() {

	// ʵ����
	Person p1;
	p1.m_Name = "����";	// ���Է���
	//p1.m_Car = "����";	// �޷�����
	//p1.m_Password = 123456;	// �޷�����

	p1.func();	// ���Է���

	system("pause");
	return 0;
}