#include <iostream>
using namespace std;

/* 函数占位参数 */

// 占位参数
// 第二个int作为占位使用，使用时，比如传入对应类型的参数
// 现阶段用不到，后面可能会有用到
void func01(int a, int) {
	cout << a << endl;
}

// 占位可设置默认值，则使用时可不传入占位参数
void func02(int a, int = 10) {
    cout << a << endl;
}

int main()
{
    func01(10, 20);
	
    func02(10);

    system("pause");
    return 0;
}