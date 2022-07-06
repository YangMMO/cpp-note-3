#include <iostream>
using namespace std;
#include <string>
#include "circle.h"
#include "point.h"

/* ��ϰ����2 */

// ���Բ�Ĺ�ϵ
// �㵽Բ�ĵľ��� == �뾶	����Բ��
// �㵽Բ�ĵľ��� > �뾶	����Բ��
// �㵽Բ�ĵľ��� < �뾶	����Բ��


// �жϵ��Բ��ϵ
// �����Ϊx2,y2   Բ��Ϊx1,y1  �뾶Ϊr
// ��(x1 - x2)^2 + (y1 - y2)^2 == r^2

void isInCircle(Circle &c, Point &p) {
	// ��������֮������ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
		
	// ����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	
	// �жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}


int main() {

	// ����Բ
	Circle c;
	c.setR(10);
	
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	// ������
	Point p;
	p.setX(10);
	p.setY(11);
	
	// �жϹ�ϵ
	isInCircle(c, p);




	system("pause");
	return 0;
}