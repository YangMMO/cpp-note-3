#include <iostream>
using namespace std;
#include <string>

/* ������������� */

class Person {
	// �˴������˽�����ԣ�����Ҫ�õ���Ԫ
	friend ostream& operator<< (ostream& cout, Person p);

public:
	Person (int a, int b) {
		m_A = a;
		m_B = b;
	}
	
private:
	// ͨ�� operator<< ���س�Ա���� <<
	// void operator<< (Person &p) �Ǵ���ģ���Ϊ����p.operator<<(p)
	// ���������� cout ����� p << cout; cout���ұߣ����ǲ���ȷ�ģ����Բ����<<д�ڳ�Ա����
	//void operator<< (cout) {
	//	return;
	//}
	int m_A;
	int m_B;
};

// ȫ������ <<
// ������: operator<<(cout,p)
// ����: cout << p;
// Ĭ��cout�ᱨ������˫��cout��Ȼ���Ҽ��鿴���壬���Բ����ostream���󣬼�[o][stream](���)(��),��Ϊ�����ֻ��һ����������Ҫ��cout��&����
ostream & operator<< (ostream &cout, Person p) {
	// ���õı���������������Կ��԰��β� &cout ��Ϊ &out Ҳ����
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
	// ��Ϊ��ʽ����ԭ�����Ҫ��������<< endl;����Ҫ����cout;
	// ����������ֵӦ����ostream & ���ã�
	return cout;
	
}

void test01() {
	Person p(10,30);
	//p.m_A = 10;
	//p.m_B = 20;

	cout << p << endl;	// ����û����֮������ƥ�� "<<"�����
}

int main() {

	test01();

	system("pause");
	return 0;
}