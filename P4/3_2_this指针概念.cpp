#include <iostream>
using namespace std;
#include <string>

/* thisָ����� */

class Person {
public:
	Person(int age) {
		//age = age;	// ����д���Ǵ���ģ���Ϊ�޷�����age��Person��Ա����age�����β�age
		this->age = age;	// ��ȷд����thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	}

	void PersonAddPerson(Person &p) {
		this->age += p.age;
	}

	// ��Ҫ��ʽ���ã����践������,������ص��Ǳ��壨*this������Ҫд ��Person&�� ������
	// ���ֻд���ص��ǣ�Person���������ص�����һ���µĿ������󣬲��Ǳ���
	Person& PersonAddPerson1(Person& p) {
		this->age += p.age;

		cout << this << endl;

		// thisָ��p2��ָ�룬��*this��ָ��ʵ��������ı���(�ڴ��ַ)
		return *this;
	}
	
	int age;
};

//1.������Ƴ�ͻ
void test01() {
	Person p1(18);
	cout << "p1.age = " << p1.age << endl;
}

//2.���ض����� *this
void test02() {
	Person p1(10);
	
	Person p2(10);

	//p2.PersonAddPerson(p1);
	p2.PersonAddPerson1(p1).PersonAddPerson1(p1);

	cout << "p2.age = " << p2.age << endl;
	cout << "p2 = " << (int&)p2.PersonAddPerson1(p1) << endl;
}




int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}