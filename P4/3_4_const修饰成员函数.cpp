#include <iostream>
using namespace std;
#include <string>

/* const���γ�Ա���� */

//������
class Person {
public:
	// this ָ��ı��ʣ�ָ�볣�����ص㣺ָ���ָ���ǲ����޸ĵ�
	// ���ָ��ָ���ֵ�����޸��� const Person * const this���ȼ��غ�������
	// �����ڳ�Ա�������const�����ε���thisָ�루����ָ�򣩣���ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//this->m_A = 100;	// ����ÿ�������ڶ���һ��this->����ָ����õĶ���
		//this = NULL;	//ָ�벻���޸�ָ���ָ����Ϊthis������ָ�볣�����˴�p�����˺�����������ָ�����p

		// m_A = 100;	// ��������ָ��ı��� = Person * const this, �����������const������ֵҲ�����Ը�
		
		this->m_B = 100;	// ��Ϊ��������mutable
	}
	void func()
	{
		m_A = 20;
	}
	void func2() const
	{
		m_B = 300;
	}
	void func3() 
	{
		m_A = 900;
	}
	int m_A;
	mutable int m_B;	// ����������������п����޸�ֵ���� mutable
};


void test01() {
	Person p;
	p.showPerson();
	cout << p.m_A << endl;
}


// ������
void test02()
{
	const Person p;	// �ڶ���ǰ��const��Ϊ������
	//p.m_A = 100;	// �������������޸�ֵ
	p.m_B = 1;	// �����޸ĳ�������������
	cout << p.m_B << endl;

	// ������ֻ�ܵ��ó�����
	p.showPerson();
	cout << p.m_B << endl;
	
	//p.func(); // �����������ܵ�����ͨ��������Ϊ��ͷ��Ա���������޸�����
	p.func2();
	cout << p.m_B << endl;

	Person p2;	// �ǳ�������������ã��˴������ڸ��˵������
	p2.func3();
	cout << p2.m_A << endl;
}

int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}