#include <iostream>
using namespace std;

/* 全局区 */
// 全局变量、静态变量、常量

// 全局变量，没有写入函数体的变量
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main()
{

    // 创建普通的局部变量
    int a = 10;
    int b = 10;

    cout << "局部变量 a 的地址为：" << (long long)&a << endl;
    cout << "局部变量 b 的地址为：" << (long long)&b << endl;

    cout << "全局变量 g_a 的地址为：" << (long long)&g_a << endl;
    cout << "全局变量 g_b 的地址为：" << (long long)&g_b << endl;

    // 静态变量 变量前加static
    static int s_a = 10;
    static int s_b = 10;

    cout << "静态变量 s_a 的地址为：" << (long long)&s_a << endl;
    cout << "静态变量 s_b 的地址为：" << (long long)&s_b << endl;

    // 常量
    // 分两种：字符串常量、const修饰的变量

    // 字符串常量 (双引号括起来的就是字符串常量)
    cout << "字符串常量的地址为：" << (long long)&"Hello World" << endl;

    // const修饰的变量
    // const 分两种：const修饰的全局变量，const修饰的局部变量
    cout << "const修饰的全局变量 c_g_a 的地址为：" << (long long)&c_g_a << endl;
    cout << "const修饰的全局变量 c_g_b 的地址为：" << (long long)&c_g_b << endl;

    const int c_l_a = 10; // l为local
    const int c_l_b = 10;

    cout << "const修饰的局部变量 c_l_a 的地址为：" << (long long)&c_l_a << endl;
    cout << "const修饰的局部变量 c_l_b 的地址为：" << (long long)&c_l_b << endl;

    // 总结：只要是带局部的都不在同一块内存

    system("pause");
    return 0;
}