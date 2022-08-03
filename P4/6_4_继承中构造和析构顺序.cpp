#include <iostream>
using namespace std;
#include <string>

/* 继承中构造和析构顺序 */

class Base {
public:
	Base() {
		cout << "Base()" << endl;
	}
	~Base() {
		cout << "~Base()" << endl;
	}
};

class Son : public Base {
public:
	Son() {
		cout << "Son()" << endl;
	}
	~Son() {
		cout << "~Son()" << endl;
	}
};

void test01() {
	//Base b;
	
	Son s;	// 先构造父类，再构造子类，析构则相反
	
}


int main() {

	test01();

	system("pause");
	return 0;
}