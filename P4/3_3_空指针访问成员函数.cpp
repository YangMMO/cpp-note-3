#include <iostream>
using namespace std;
#include <string>

/* ��ָ����ʳ�Ա���� */

class Person {
public:
	void showClassName() {
		cout << "this is Person" << endl;
	}

	void showPersonAge() {
		// Ĭ��m_Age ���� this->m_Age�����˴�test01�������ǿ�ָ�룬û��ʵ�壬���Ա���

		// ͨ�����жϽ���Ԥ��
		if (this == NULL) {
			return;
		}

		cout << "Person age = " << m_Age << endl;
	}

	int m_Age;
};


void test01() {
	Person* p = NULL;	// Person���͵Ŀ�ָ��

	//p->showClassName();
	p->showPersonAge();

}


int main() {

	test01();

	system("pause");
	return 0;
}