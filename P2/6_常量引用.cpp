#include <iostream>
using namespace std;

/* �������� */

// ��ӡ���ݺ���
void print(const int &val)
{
	//val = 1000;	//����const����ʾ�������޸ģ���ֹ�ڿ���ʱ�����
	cout << val << endl;
}


int main()
{
	// ʹ�ó����������βΣ���ֹ�����

	int a = 10;
	int& ref = a;	// ��ȷ

	// int &ref2 = 10;	// �������ñ�������һ���Ϸ����ڴ�ռ�
	// 
	// �������const����ȷ
	// �������������޸�Ϊ int temp = 10; const int &ref2 = temp;
	// ��������һ����ʱ���ڴ�ռ�
	const int& ref2 = 10;
	
	//ref2 = 20;	// ������Ϊ����const��Ϊֻ��

	
	// ������ʾ

	int b = 100;
	print(b);

	cout << "b = " << b << endl;
	
	
	system("pause");
	return 0;
}