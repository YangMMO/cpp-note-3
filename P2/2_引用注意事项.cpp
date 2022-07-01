#include <iostream>
using namespace std;

/* 引用注意事项 */

int main()
{
	int a = 10;

	// 1. 引用必须初始化
	//int &b;	// 错误
	int& b = a;	// 正确

	// 2. 引用在初始化后，不可以改变
	int c = 20;
	b = c;	// 错误，因为这是赋值操作，不等于引用, 所以是a与b都赋值了一个c变量

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	

	system("pause");
	return 0;
}