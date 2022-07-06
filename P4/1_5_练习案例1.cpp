#include <iostream>
using namespace std;
#include <string>

/* 练习案例1 */

// 设计立方体类(Cube)
// 1. 求出立方体的面积和体积
// 2. 分别用全局函数和成员函数判断两个立方体是否相等。

class Cube {
public:
	// 设置长宽高
	void setLength(int l) {
		m_L = l;
	}
	
	void setWidth(int w) {
		m_W = w;
	}
	
	void setHeight(int h) {
		m_H = h;
	}
	
	// 获取长宽高
	int getLength() {
		return m_L;
	}
	
	int getWidth() {
		return m_W;
	}
	
	int getHeight() {
		return m_H;
	}

	// 获取立方体面积
	int calculateS() {
		return 2*m_L*m_W + 2*m_L*m_H + 2*m_W*m_H;
	}

	// 获取立方体体积
	int calculateV() {
		return m_L*m_W*m_H;
	}

	// 成员函数判断是否相等
	bool isSameByClass (Cube& c) {
		if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight()) {
			return true;
		}

		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
		return true;
	}

	return false;
}

int main() {

	// 创建立方体
	Cube c1;
	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(10);

	// 600
	cout << "c1的面积：" << c1.calculateS() << endl;
	// 1000
	cout << "c1的体积：" << c1.calculateV() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(10);
	

	// 利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1 c2 相等" << endl;
	}
	else
	{
		cout << "c1 c2 不相等" << endl;
	}


	// 利用成员函数判断
	ret = c1.isSameByClass(c2);

	if (ret) {
		cout << "成员函数：c1 c2 相等" << endl;
	}
	else
	{
		cout << "成员函数：c1 c2 不相等" << endl;
	}


	system("pause");
	return 0;
}