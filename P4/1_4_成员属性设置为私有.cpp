#include <iostream>
using namespace std;
#include <string>

/* 成员属性设置为私有 */

// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性

class Person {
public:
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	
	void setAge(int age) {
		if (age < 0 || age > 150) {
			m_Age = 0;
			cout << "年龄超出范围" << endl;
			return;
		}
		m_Age = age;
	}
	
	int getAge() {
		return m_Age;
	}
	
	void setLover(string lover) {
		m_Lover = lover;
	}
	
	
private:	// 私有
	string m_Name;	// 可读可写
	int m_Age;	// 只读
	string m_Lover; // 只写

};

int main() {

	Person p1;
	p1.setName("张三");
	cout << p1.getName() << endl;

	//p1.m_Age;	// error
	//p1.setAge(18);	// error
	
	p1.setAge(1000);
	cout << p1.getAge() << endl;

	p1.setLover("李四");
	//cout << p1.getLover() << endl; // error

	system("pause");
	return 0;
}