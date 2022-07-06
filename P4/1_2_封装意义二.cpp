#include <iostream>
using namespace std;

/* 封装意义二 */

/* 访问权限 */
// 公共权限 public			成员： 类外 & 类内 可访问
// 保护权限 protected		成员： 类内可访问 & 类外不可以访问 & 子类可以访问父类的保护内容
// 私有权限 private			成员： 类内可访问 & 类外不可以访问 ! 子类不可以访问父类的私有内容

class Person {
public:
	string m_Name;
	
protected:
	string m_Car;

private:
	int m_Password;
	
	
public:
	void func() {
		m_Name = "张三";
		m_Car = "宝马";
		m_Password = 123456;
	}
};

int main() {

	// 实例化
	Person p1;
	p1.m_Name = "李四";	// 可以访问
	//p1.m_Car = "奔驰";	// 无法访问
	//p1.m_Password = 123456;	// 无法访问

	p1.func();	// 可以访问

	system("pause");
	return 0;
}