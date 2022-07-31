#include <iostream>
using namespace std;
#include <string>

/* 函数调用运算符重载 */

// 打印输出

class MyPrint {
public:
	// 重载函数调用运算符();

	void operator()(string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;
}

void test01() {
	MyPrint myPrint;
	
	myPrint("hellow world");	// 由于使用起来非常相似与函数调用，因此成为仿函数

	MyPrint02("hellow world");
}

// 仿函数非常灵活，没有固定写法
// 加法类

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
	
};

void test02() {
	MyAdd add;
	int result = add(100, 50);
	cout << result << endl;

	// 匿名函数对象
	cout << MyAdd()(30, 60) << endl;
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}