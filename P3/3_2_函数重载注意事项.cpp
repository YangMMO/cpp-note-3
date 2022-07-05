#include <iostream>
using namespace std;

/* 函数重载注意事项 */

// 1. 引用作为重载条件
void func(int &a) {
	cout << "func() 1" << endl;
}

void func(const int& a) {
	cout << "func() 1" << endl;
}

// 2. 函数重载碰到函数默认参数
void func2(int a, int b = 10) {
	cout << "func() 21" << endl;
}

void func2(int a) {
	cout << "func() 22" << endl;
}

int main() {

	int a = 1;
	func(a);	// 声明后传参使用的func01， 因为a非只读类型

	func(10);	// 直接传参使用的func02，因为传入后等于 const int$ a = 10;

	//func2(1); // 报错，当函数重载碰到默认参数（int b = 10，非必填），出现二义性，尽量避免这种情况
	func2(1,20);	// 正确，因为明确了参数

	system("pause");
	return 0;
}