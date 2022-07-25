#include <iostream>
using namespace std;
#include <string>

/* 构造函数的分类及调用 */
// 分类
// 按照参数分类： 无参构造（默认构造，自动空实现）和有参构造
// 按照类型分类： 普通构造	拷贝构造
class Person {
public:
	// 构造函数
	Person() {
		cout << "无参构造 Person()" << endl;
	}

	Person(int a) {
		age = a;
		cout << "有参构造 Person(int a))" << endl;
	}

	// 拷贝构造函数，相当于直接拷贝一份一模一样的数据，不能改变原有
	Person(const Person& p) {
		cout << "拷贝构造 Person(const Person& p)" << endl;
		// 将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
	}

	// 析构函数
	~Person() {
		cout << "析构 ~Person()" << endl;
	}

	int age;
};

// 调用
void test01()
{
	// 1.括号法
	Person p1;	// 默认构造函数调用
	Person p2(10);	// 有参构造函数调用
	Person p3(p2);	// 拷贝构造函数调用

	//cout << "p2.age = " << p2.age << endl;	// 10
	//cout << "p3.age = " << p3.age << endl;	// 10
	
	// 注意事项
	// 调用默认构造函数时，不要加()
	//Person p1();	// 错误，因为会认为是一个函数声明
	//void func();
	
	// 2.显示法
	Person p1;
	Person p2 = Person(10);	// 有参构造
	Person p3 = Person(p2);	// 拷贝构造

	//Person(10);		// 单独拿出来为匿名对象。特点：当前行结束后，系统立即回收掉匿名对象

	// 注意事项
	// 不要利用拷贝构造函数 初始化匿名对象，编译器认为 Person(p3) === Person p3;
	//Person(p3);	// 报错


	// 3.隐式转换法
	Person p4 = 10;	// 有参构造 等于 Person p4 = Person(10)
	Person p5 = p4;	// 拷贝构造 等于 Person p5 = Person(p4)
}

int main() {

	// 
	test01();

	system("pause");
	return 0;
}