#include <iostream>
using namespace std;

/* ����ע������ */

int main()
{
	int a = 10;

	// 1. ���ñ����ʼ��
	//int &b;	// ����
	int& b = a;	// ��ȷ

	// 2. �����ڳ�ʼ���󣬲����Ըı�
	int c = 20;
	b = c;	// ������Ϊ���Ǹ�ֵ����������������, ������a��b����ֵ��һ��c����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	

	system("pause");
	return 0;
}