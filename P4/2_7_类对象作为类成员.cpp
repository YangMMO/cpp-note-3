#include <iostream>
using namespace std;
#include <string>

/* �������Ϊ���Ա */

class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
		cout << "Phone() " << endl;
	}
	// �ֻ�Ʒ������
	string m_PName;
	
	~Phone() {
		cout << "~Phone() " << endl;
	}
};

class Person {
public:
	// m_Phone(pName) �൱�� Phone m_Phone = pName; ������ʽת����
	Person(string name, string pName) :m_Name(name),m_Phone(pName) {
		cout << "Person()" << endl;
	}
	string m_Name;
	Phone m_Phone;
	
	~Person() {
		cout << "~Person()" << endl;
	}
};

// �������������Ϊ�����Ա������ʱ�ȹ�����Ķ����ٹ�������
// ������˳���빹���෴

void test01() {
	Person p("����", "С��");
	cout << p.m_Name << "���ֻ���" << p.m_Phone.m_PName << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}