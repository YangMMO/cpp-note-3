#include <iostream>
using namespace std;

/* �������������� */

// 1. �������� ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

// 2. �������� ��ַ����
void swap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap02 a = " << a << endl;
	cout << "swap02 b = " << b << endl;
}

// 3. �������� ���ô���
void swap03(int &a, int &b)	// �൱�ڶ��β������
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a = " << a << endl;
	cout << "swap03 b = " << b << endl;
}

int main()
{
	int
		a = 1,
		b = 2;

	//swap01(a, b);	// ֵ���ݣ��ββ�������ʵ��
	//swap02(&a, &b);	// ��ַ���ݣ��βλ�����ʵ��
	swap03(a, b);		// ���ô��ݣ��βλ�����ʵ��
	
	cout << "a = " << a <<  endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}