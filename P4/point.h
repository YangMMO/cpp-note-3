#pragma once	// 防止重复
#include <iostream>
using namespace std;

// 点类，只留下声明，删除实现
class Point {
public:
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();

private:
	int m_X;
	int m_Y;
};