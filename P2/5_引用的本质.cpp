#include <iostream>
using namespace std;

/* ���õı��� */
// ���е����ö��Ǳ������Զ�ת���ģ������õı��ʾ���ָ�볣��

void func (int &ref)
{
	ref = 100;	// ��Ϊ����������ã�����ʵ�ʵ��� *ref = 100;
}

int main()
{
	int a = 10;

	int& ref = a;	// ���õı�����һ��ָ�볣�� int *ref = &a;
	ref = 20; // ����ref�Ǹ����ã����Զ�ת��Ϊ *ref = 20;
	
	cout
		<< "a = " << a << endl
		<< " ref = " << ref << endl;

	func(a);
	
	system("pause");
	return 0;
}