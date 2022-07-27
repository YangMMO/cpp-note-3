#include <iostream>
using namespace std;
#include <string>

/* 类对象作为类成员 */

class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
		cout << "Phone() " << endl;
	}
	// 手机品牌名称
	string m_PName;
	
	~Phone() {
		cout << "~Phone() " << endl;
	}
};

class Person {
public:
	// m_Phone(pName) 相当于 Phone m_Phone = pName; 这是隐式转换法
	Person(string name, string pName) :m_Name(name),m_Phone(pName) {
		cout << "Person()" << endl;
	}
	string m_Name;
	Phone m_Phone;
	
	~Person() {
		cout << "~Person()" << endl;
	}
};

// 当其他类对象作为本类成员，构造时先构造类的对象，再构造自身
// 析构的顺序与构造相反

void test01() {
	Person p("张三", "小米");
	cout << p.m_Name << "的手机是" << p.m_Phone.m_PName << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}