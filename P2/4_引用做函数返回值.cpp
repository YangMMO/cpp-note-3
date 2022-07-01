#include <iostream>
using namespace std;

/* 引用做函数返回值 */

// 1. 不要返回局部变量引用
int& test01() {
	int a = 10;	// 存放与四区中的栈区
	return a;
}

// 2. 函数调用作为左值
int& test02() {
	static int a = 10;	//静态变量，存放于全局区，系统结束后释放
	return a;
}

int main()
{
	int &ref = test01();
	cout << "ref = " << ref << endl;	// 旧版可能会保存一次数据，新版直接返回错值

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;	// 10
	cout << "ref2 = " << ref2 << endl;	// 10

	test02() = 1000;	// 作为左值，因为a是static，相当于返回了a的引用，所以可以作为左值存在于全局区

	// 同时 ref2作为test02的别名，所以ref2 也等于 a = 1000
	cout << "ref2 = " << ref2 << endl;	// 1000
	cout << "ref2 = " << ref2 << endl;	// 1000

	system("pause");
	return 0;
}