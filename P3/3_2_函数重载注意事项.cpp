#include <iostream>
using namespace std;

/* ��������ע������ */

// 1. ������Ϊ��������
void func(int &a) {
	cout << "func() 1" << endl;
}

void func(const int& a) {
	cout << "func() 1" << endl;
}

// 2. ����������������Ĭ�ϲ���
void func2(int a, int b = 10) {
	cout << "func() 21" << endl;
}

void func2(int a) {
	cout << "func() 22" << endl;
}

int main() {

	int a = 1;
	func(a);	// �����󴫲�ʹ�õ�func01�� ��Ϊa��ֻ������

	func(10);	// ֱ�Ӵ���ʹ�õ�func02����Ϊ�������� const int$ a = 10;

	//func2(1); // ������������������Ĭ�ϲ�����int b = 10���Ǳ�������ֶ����ԣ����������������
	func2(1,20);	// ��ȷ����Ϊ��ȷ�˲���

	system("pause");
	return 0;
}