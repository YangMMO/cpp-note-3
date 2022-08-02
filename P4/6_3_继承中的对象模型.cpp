#include <iostream>
using namespace std;
#include <string>

/* 继承中的对象模型 */

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son: public Base {
public:
	int m_D;
};

void test01() {
	// 结果16 （4*4字节）
	// 父类中所有非静态成员属性都会被子类继承下去
	// 父类私有成员被编译器隐藏，访问不到，但确实被继承下去了
	cout << sizeof(Son) << endl;
}

// 利用开发人员命令提示工具查看对象模型
// 跳转盘符 ： F:
// 跳转至指定路径下 ： cd: <路径>
// 查看所有文件 ： dir
// 查看命令 ： cl /d reportSingleClassLayout<类名> <文件名>


int main() {

	test01();

	system("pause");
	return 0;
}