#include <iostream>
using namespace std;

/* 封装的意义 */

// 设计一个圆类，求圆的周长
// 圆球周长的公司：2 * PI * r（半径）

// 圆周率
const double PI = 3.14;

// class 代表设计一个类，后面紧跟类名
class Circle {

	/* 访问权限 */
	// 公共权限
public:

	/* 属性 */
	// 半径
	int m_r;

	/* 行为 */
	// 获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};


int main() {

	// 创建对象实例
	Circle c1;
	
	// 赋值
	c1.m_r = 10;

	// 调用行为
	cout << c1.calculateZC() << endl;
		

	system("pause");
	return 0;
}