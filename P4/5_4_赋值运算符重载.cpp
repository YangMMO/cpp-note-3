#include <iostream>
using namespace std;
#include <string>

/* ȫ�ֺ�������Ԫ */

class Person {
public:
	Person(int age) {
		m_Age = new int(age);
	}

	// �����ͷ�����, �˴���Ϊp2��p1���õ���ͬһ���ַ���ظ������ᱨ��������Ҫ��������
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	// ͨ����д��������� = �����
	Person& operator=(Person &p) {
		// �������ṩ����ǳ����
		//m_Age = p.m_Age;
		
		// ��Ҫֱ��д��������ж��Ƿ��������ڶ������˴�p2(20)���������ͷŸɾ���Ȼ�����
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;	//ɾ����ǵ�����m_Age = NULL
		}

		m_Age = new int(*p.m_Age);
		
		// ���Ҫ��ʽ���� c = b = a ������Ҫ��������
		return *this;
	}

	int* m_Age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;
	
	cout << "p1.m_Age = " << *p1.m_Age << endl;
	cout << "p2.m_Age = " << *p2.m_Age << endl;
	cout << "p3.m_Age = " << *p3.m_Age << endl;
}

int main() {

	test01();
	
	// ��ʽ����
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//
	//c = b = a;
	//
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	system("pause");
	return 0;
}