#include <iostream>
using namespace std;

/* 栈区注意事项 */
// 栈区由编译器自动分配释放
// 不要返回局部变量的地址，栈区开辟的数据有编译器自动释放

int * func(int b) {  // 行程数据也会放在栈区
    b = 100;
    int a = 10; // 存放在栈区，栈区的数据在执行函数后自动释放
    return &a;  // 返回局部变量地址
}


int main()
{
    
    // 接受func函数返回值
    int* p = func(1);
    cout << *p << endl; // 第一次正确打印，是因为编译器做了保留
    cout << *p << endl; // 第二次不再保留(与x86，x64有关)

    system("pause");
    return 0;
}