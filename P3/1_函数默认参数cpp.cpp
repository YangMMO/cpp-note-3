#include <iostream>
using namespace std;

/* 函数默认参数 */

// 如果没有传入数据则使用默认值，如果有传入则使用传入数据
int func(int a, int b = 20, int c = 30) {
    return a + b + c;
}

// 注意事项

// 1.如果某个位置已有了默认参数，那么从这个位置往后，从左到右都必须有默认值
// 示例 1
int func02(int a, int b = 20, int c = 30, int d = 40) {   // 比如b设置了默认，则往后c，d也必须有默认，否则报错
    return a + b + c + d;
}

// 2. 如果函数生命有默认参数，函数实现就不能有默认参数
// 示例 2
// 这是声明
int func03(int a, int b = 20, int c = 30) {
}

// 这是实现，这是错误的，声明已经有了默认参数，则实现不能有，否则会报错函数被重定义了
//int func03(int a, int b = 20, int c = 30) {
//	return a + b + c;
//}

// 正确 实现写法， 所以声明和实现只能一个有默认参数，不能同时拥有
int func03(int a,int b,int c) {
	return a + b + c;
}

int main()
{
    int a = 10;
	
	cout << func(a) << endl;
    cout << func(a, 10) << endl;
    

    system("pause");
    return 0;
}