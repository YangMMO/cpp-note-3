#include <iostream>
using namespace std;

/* �������� */
// �����ú�������ͬ����߸�����

// ������������������
// 1. ͬһ����������
// 2. ����������ͬ
// 3. �����������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
void func() {
	cout << "func() 1" << endl;
}

void func(int a) {
	cout << "func() 2" << endl;
}

void func(double a) {
	cout << "func() 3" << endl;
}

void func(int a, double b) {
	cout << "func() 4" << endl;
}

void func(double b, int a) {
	cout << "func() 5" << endl;
}


// ע������
// 1. ������Ϊ��������
// 2. ����������������Ĭ�ϲ���

// ������Ϊ����ֵ���Ա������ void func, �˴��� int func ��������Ϊ��������������
//int func(double b, int a) {
//	cout << "func() 5" << endl;
//}


int main() {

	// ���ص��ã����ᱨ��
	func();
	func(1);
	func(3.14);
	func(1,3.14);
	func(3.14,1);

    system("pause");
    return 0;
}