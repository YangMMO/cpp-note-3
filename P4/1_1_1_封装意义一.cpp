#include <iostream>
using namespace std;

/* ��װ������ */

// ���һ��Բ�࣬��Բ���ܳ�
// Բ���ܳ��Ĺ�˾��2 * PI * r���뾶��

// Բ����
const double PI = 3.14;

// class �������һ���࣬�����������
class Circle {

	/* ����Ȩ�� */
	// ����Ȩ��
public:

	/* ���� */
	// �뾶
	int m_r;

	/* ��Ϊ */
	// ��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};


int main() {

	// ��������ʵ��
	Circle c1;
	
	// ��ֵ
	c1.m_r = 10;

	// ������Ϊ
	cout << c1.calculateZC() << endl;
		

	system("pause");
	return 0;
}