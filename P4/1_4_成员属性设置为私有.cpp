#include <iostream>
using namespace std;
#include <string>

/* ��Ա��������Ϊ˽�� */

// �ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
// �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person {
public:
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	
	void setAge(int age) {
		if (age < 0 || age > 150) {
			m_Age = 0;
			cout << "���䳬����Χ" << endl;
			return;
		}
		m_Age = age;
	}
	
	int getAge() {
		return m_Age;
	}
	
	void setLover(string lover) {
		m_Lover = lover;
	}
	
	
private:	// ˽��
	string m_Name;	// �ɶ���д
	int m_Age;	// ֻ��
	string m_Lover; // ֻд

};

int main() {

	Person p1;
	p1.setName("����");
	cout << p1.getName() << endl;

	//p1.m_Age;	// error
	//p1.setAge(18);	// error
	
	p1.setAge(1000);
	cout << p1.getAge() << endl;

	p1.setLover("����");
	//cout << p1.getLover() << endl; // error

	system("pause");
	return 0;
}