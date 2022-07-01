#include <iostream>
using namespace std;

/* 引用语法 */

int main()
{
    // 基本语法
	int a = 10;
    
    // 创建引用
	int &ref = a;
	
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	ref = 20;
	
	cout << "a = " << a << endl;	// 20
	cout << "ref = " << ref << endl;	// 20
	
    system("pause");
    return 0;
}