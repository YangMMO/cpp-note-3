#include <iostream>
using namespace std;

/* 常量引用 */

// 打印数据函数
void print(const int &val)
{
	//val = 1000;	//加入const则提示不允许修改，防止在开发时误操作
	cout << val << endl;
}


int main()
{
	// 使用场景：修饰形参，防止误操作

	int a = 10;
	int& ref = a;	// 正确

	// int &ref2 = 10;	// 错误，引用必须引用一个合法的内存空间
	// 
	// 如果加上const则正确
	// 编译器将代码修改为 int temp = 10; const int &ref2 = temp;
	// 它开辟了一个临时的内存空间
	const int& ref2 = 10;
	
	//ref2 = 20;	// 错误，因为加了const变为只读

	
	// 场景演示

	int b = 100;
	print(b);

	cout << "b = " << b << endl;
	
	
	system("pause");
	return 0;
}