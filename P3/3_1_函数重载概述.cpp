#include <iostream>
using namespace std;

/* 函数重载 */
// 可以让函数名相同，提高复用性

// 函数重载满足条件：
// 1. 同一个作用域下
// 2. 函数名称相同
// 3. 函数参数类型不同 或者 个数不同 或者 顺序不同
void func() {
	cout << "func() 1" << endl;
}

void func(int a) {
	cout << "func() 2" << endl;
}

void func(double a) {
	cout << "func() 3" << endl;
}

void func(int a, double b) {
	cout << "func() 4" << endl;
}

void func(double b, int a) {
	cout << "func() 5" << endl;
}


// 注意事项
// 1. 引用作为重载条件
// 2. 函数重载碰到函数默认参数

// 报错，因为返回值（对比上面的 void func, 此处是 int func ）不可作为函数的重载条件
//int func(double b, int a) {
//	cout << "func() 5" << endl;
//}


int main() {

	// 重载调用，不会报错
	func();
	func(1);
	func(3.14);
	func(1,3.14);
	func(3.14,1);

    system("pause");
    return 0;
}