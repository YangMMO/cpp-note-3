#include <iostream>
using namespace std;

/* 引用的本质 */
// 所有的引用都是编译器自动转换的，但引用的本质就是指针常量

void func (int &ref)
{
	ref = 100;	// 因为传入的是引用，所以实际等于 *ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;	// 引用的本质是一个指针常量 int *ref = &a;
	ref = 20; // 发现ref是个引用，则自动转化为 *ref = 20;
	
	cout
		<< "a = " << a << endl
		<< " ref = " << ref << endl;

	func(a);
	
	system("pause");
	return 0;
}