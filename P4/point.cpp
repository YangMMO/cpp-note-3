#include <iostream>
#include "point.h"

// 此处写入实现，但必须写明是谁的作用域下的 比如 类::(成员)
void Point::setX(int x) {
	m_X = x;
}
int Point::getX() {
	return m_X;
}
void Point::setY(int y) {
	m_Y = y;
}
int Point::getY() {
	return m_Y;
}