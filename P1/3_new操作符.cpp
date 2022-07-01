#include <iostream>
using namespace std;

/* new操作符 */

// 1. new的基本语法
int * func() {
    // 在堆区创建整型数据
    // 返回的是该数据类型的指针
    // new 的类型与返回类型是一样的，如int = new int接收
    int *p = new int(10);
    return p;
}

void test01() {
    // 区开辟的数据，由程序员手动开辟，手动释放
    int *p = func();
    cout << *p << endl;

    // 释放利用操作符 delete
    delete p;

    //cout << *p << endl; // 内存已被释放，引发了异常: 读取访问权限冲突。
}

// 2. 在堆区利用new开辟数组
void test02() {
    // 创建10个整型数据的数组
    int * arr = new int[10];    // 10代表10个元素 返回的是数组的首地址
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;   //赋值 100~109
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;   // 释放数组需要在delete后加[]
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}