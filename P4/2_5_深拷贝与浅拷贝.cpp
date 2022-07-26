#include <iostream>
using namespace std;
#include <string>

/* �����ǳ���� */



class Person {
public:
	Person() {
		cout << "Person()" << endl;
	}

	Person(int age, int height) {
		m_Age = age;
		m_Height =  new int(height);	// ����һ���µ������ڶ��������ص���һ��int *, Ȼ��ָ��m_Heightȥ���ն���������
		cout << "Person(int age)" << endl;
	}
	
	// �Լ�ʵ�ֿ������캯�� ���ǳ����������ָ������ͷ�����
	Person(const Person& p) {
		cout << "Person(const Person& p)" << endl;
		//m_Height = p.m_Height;	// Ĭ�ϱ���������ôд�ģ�����������
		
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);	// ��������m_Height = ������p.m_Height
	}

	~Person() {
		// ���������������ٵ��������ͷŲ���
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "~Person()" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01() {
	Person p1(18, 160);
	cout << "p1 age = " << p1.m_Age << "\t p1 height = " << *p1.m_Height <<  endl;

	Person p2(p1);
	cout << "p2 age = " << p2.m_Age << "\t p2 height = " << *p2.m_Height << endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}