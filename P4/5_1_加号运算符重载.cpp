#include <iostream>
using namespace std;
#include <string>

/* 加号运算符重载 */

// 1. 通过成员函数重载+号
class Person {
public:
	// 通过 operator+ 重载成员函数 +号
	Person operator+ (Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};

// 2. 通过全局函数重载+号
Person operator+ (Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
};

// 函数重载
Person operator+ (Person& p1, int num) {
Person temp;
temp.m_A = p1.m_A + num;
temp.m_B = p1.m_B + num;
return temp;
};

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	
	Person p2;
	p2.m_A = 20;
	p2.m_B = 20;
	
	Person p3 = p1 + p2;	// 默认报错，因为数据类型是 Person + Person 无法计算，当重载了+号则正常运算
	cout << p3.m_A << " " << p3.m_B << endl;

	// 成员函数重载的本质调用
	Person p4 = p1.operator+(p2);

	// 全局函数重载的本质调用
	Person p5 = operator+(p1, p2);
	
	// 运算符重载 也可以发生函数重载
	Person p6 = p1 + 10;
}

int main() {

	test01();

	system("pause");
	return 0;
}