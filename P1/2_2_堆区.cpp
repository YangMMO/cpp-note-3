#include <iostream>
using namespace std;

/* 堆区开辟数据 */
int * func() {
    // 利用new开辟堆区
    // new 返回的是一个地址，所以要用指针来接收
    int *p = new int(10);
    return p;
}


int main()
{

    // 使用
    // 指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    system("pause");
    return 0;
}