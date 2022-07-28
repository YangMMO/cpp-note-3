#include <iostream>
using namespace std;
#include <string>

/* 空指针访问成员函数 */

class Person {
public:
	void showClassName() {
		cout << "this is Person" << endl;
	}

	void showPersonAge() {
		// 默认m_Age 等于 this->m_Age，但此处test01创建的是空指针，没有实体，所以报错

		// 通常加判断进行预防
		if (this == NULL) {
			return;
		}

		cout << "Person age = " << m_Age << endl;
	}

	int m_Age;
};


void test01() {
	Person* p = NULL;	// Person类型的空指针

	//p->showClassName();
	p->showPersonAge();

}


int main() {

	test01();

	system("pause");
	return 0;
}