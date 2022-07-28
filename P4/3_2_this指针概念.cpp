#include <iostream>
using namespace std;
#include <string>

/* this指针概念 */

class Person {
public:
	Person(int age) {
		//age = age;	// 这种写法是错误的，因为无法区分age是Person成员属性age还是形参age
		this->age = age;	// 正确写法，this指针指向被调用的成员函数所属的对象
	}

	void PersonAddPerson(Person &p) {
		this->age += p.age;
	}

	// 如要链式调用，则需返回自身,如果返回的是本体（*this）则需要写 （Person&） 来引用
	// 如果只写返回的是（Person），它返回的则是一个新的拷贝对象，并非本体
	Person& PersonAddPerson1(Person& p) {
		this->age += p.age;

		cout << this << endl;

		// this指向p2的指针，而*this则指向实例化对象的本体(内存地址)
		return *this;
	}
	
	int age;
};

//1.解决名称冲突
void test01() {
	Person p1(18);
	cout << "p1.age = " << p1.age << endl;
}

//2.返回对象本身 *this
void test02() {
	Person p1(10);
	
	Person p2(10);

	//p2.PersonAddPerson(p1);
	p2.PersonAddPerson1(p1).PersonAddPerson1(p1);

	cout << "p2.age = " << p2.age << endl;
	cout << "p2 = " << (int&)p2.PersonAddPerson1(p1) << endl;
}




int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}