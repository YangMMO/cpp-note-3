#include <iostream>
using namespace std;
#include <string>

/* 全局函数做友元 */

class Person {
public:
	Person(int age) {
		m_Age = new int(age);
	}

	// 析构释放数据, 此处因为p2和p1引用的是同一块地址，重复析构会报错，所以需要深拷贝来解决
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	// 通过重写重载运算符 = 来深拷贝
	Person& operator=(Person &p) {
		// 编译器提供的是浅拷贝
		//m_Age = p.m_Age;
		
		// 不要直接写深拷贝，先判断是否有属性在堆区，此处p2(20)，有则先释放干净，然后深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;	//删除后记得重置m_Age = NULL
		}

		m_Age = new int(*p.m_Age);
		
		// 如果要链式调用 c = b = a ；则需要返回自身
		return *this;
	}

	int* m_Age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;
	
	cout << "p1.m_Age = " << *p1.m_Age << endl;
	cout << "p2.m_Age = " << *p2.m_Age << endl;
	cout << "p3.m_Age = " << *p3.m_Age << endl;
}

int main() {

	test01();
	
	// 链式调用
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//
	//c = b = a;
	//
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	system("pause");
	return 0;
}