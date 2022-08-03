#include <iostream>
using namespace std;
#include <string>

/* 继承的基本语法 */

class Animal {
public:
	int m_Age;
};

// 利用 虚继承 解决菱形继承问题,
// 继承前加关键字 virtual
// 则 Animal 称为 虚基类
class Sheep:virtual public Animal {
public:

};

class Tuo :virtual public Animal {
public:
	
};

class SheepTuo : public Sheep, public Tuo {
public:
	
};

void test01() {
	SheepTuo st;
	//st.m_Age = 18; //报错，菱形继承二义性,需要加作用域
	
	// 如果使用作用域，则会发现问题，菱形继承有两个数据，导致资源浪费
	st.Sheep::m_Age = 18;	
	st.Tuo::m_Age = 28;

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;	// 18
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;	// 28

	// 要解决，使用开发人员工具，以上cout代码，在虚继承后，打印 28
	// 相当于共享数据，只有一份
	// 虚继承后，则可以使用以下方式访问
	cout << "st.m_Age = " << st.m_Age << endl;	// 28
	
	// 通过开发者工具，可以看到继承的是 {vbptr}
	// v - 虚拟 virtual
	// b - 基类 base
	// ptr - 指针 pointer
	// {vbptr} 指向 vbtable（虚基类表）
}


int main() {

	test01();

	system("pause");
	return 0;
}