#pragma once	// ��ֹ�ظ�
#include <iostream>
using namespace std;

// ���ֻ࣬����������ɾ��ʵ��
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