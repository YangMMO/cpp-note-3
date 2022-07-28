#include <iostream>
using namespace std;
#include <string>

/* const修饰成员函数 */

//常函数
class Person {
public:
	// this 指针的本质：指针常量；特点：指针的指向是不可修改的
	// 如果指针指向的值不可修改则 const Person * const this，既加载函数后面
	// 所以在成员函数后加const，修饰的是this指针（不是指向），让指针指向的值也不可以修改
	void showPerson() const
	{
		//this->m_A = 100;	// 报错，每个函数内都有一个this->，其指向调用的对象
		//this = NULL;	//指针不能修改指针的指向，因为this本质是指针常量，此处p调用了函数，函数的指向就是p

		// m_A = 100;	// 本案例，指针的本意 = Person * const this, 但函数后加了const，代表值也不可以改
		
		this->m_B = 100;	// 因为声明加了mutable
	}
	void func()
	{
		m_A = 20;
	}
	void func2() const
	{
		m_B = 300;
	}
	void func3() 
	{
		m_A = 900;
	}
	int m_A;
	mutable int m_B;	// 特殊变量，常函数中可以修改值，加 mutable
};


void test01() {
	Person p;
	p.showPerson();
	cout << p.m_A << endl;
}


// 常对象
void test02()
{
	const Person p;	// 在对象前加const变为常对象
	//p.m_A = 100;	// 报错，常对象不能修改值
	p.m_B = 1;	// 可以修改常对象的特殊变量
	cout << p.m_B << endl;

	// 常对象只能调用常函数
	p.showPerson();
	cout << p.m_B << endl;
	
	//p.func(); // 报错，常对象不能调用普通函数，因为铺头成员函数可以修改属性
	p.func2();
	cout << p.m_B << endl;

	Person p2;	// 非常对象的正常调用，此处仅用于个人调试理解
	p2.func3();
	cout << p2.m_A << endl;
}

int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}