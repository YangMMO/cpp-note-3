#include <iostream>
using namespace std;
#include <string>

/* 关系运算符重载 */

class Person {
public:
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	
	// 重载==
	bool operator== (Person &p) {
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		else {
			return false;
		}
	}

	bool operator!= (Person& p) {
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return false;
		}
		else {
			return true;
		}
	}
	
	string m_Name;
	int m_Age;
};

void test01 () {
	Person p1("tom", 18);
	Person p2("jerry", 18);
	if (p1 == p2) {
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}

	if (p1 != p2) {
		cout << "p1 != p2" << endl;
	}
	else
	{
		cout << "p1 == p2" << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}