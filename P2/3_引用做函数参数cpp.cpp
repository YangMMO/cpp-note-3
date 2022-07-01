#include <iostream>
using namespace std;

/* 引用做函数参数 */

// 1. 交换函数 值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

// 2. 交换函数 地址传递
void swap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap02 a = " << a << endl;
	cout << "swap02 b = " << b << endl;
}

// 3. 交换函数 引用传递
void swap03(int &a, int &b)	// 相当于对形参起别名
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a = " << a << endl;
	cout << "swap03 b = " << b << endl;
}

int main()
{
	int
		a = 1,
		b = 2;

	//swap01(a, b);	// 值传递，形参不会修饰实参
	//swap02(&a, &b);	// 地址传递，形参会修饰实参
	swap03(a, b);		// 引用传递，形参会修饰实参
	
	cout << "a = " << a <<  endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}