#include <iostream>
using namespace std;
#include <string>

/* �̳��й��������˳�� */

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
	
	Son s;	// �ȹ��츸�࣬�ٹ������࣬�������෴
	
}


int main() {

	test01();

	system("pause");
	return 0;
}