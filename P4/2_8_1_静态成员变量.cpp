#include <iostream>
using namespace std;
#include <string>

/* 静态成员变量 */

class Person {
public:
	//○ 所有对象共享同一份数据
	//○ 在编译阶段分配内存
	//○ 类内声明，类外初始化
	static int m_A;

	// 静态成员变量也有访问权限
private:
	static int m_B;
};

// 相当于类内做的声明，类外做的初始化
int Person::m_A = 100;

int Person::m_B = 200;

void test01() {
	Person p;
	cout << p.m_A << endl;	// 100

	Person p2;
	p2.m_A = 200;
	
	cout << p.m_A << endl;	// 200
}

void test02() {
	// 静态成员变量不属于某个对象上，所有对象共享同一份数据
	// 因此静态成员变量有两种访问方式
	
	// 1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;	// 100

	// 2.通过类名进行访问
	cout << Person::m_A << endl;	// 100

	//cout << Person::m_B << endl;	// 报错，因为是私有属性，所以无法访问
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}