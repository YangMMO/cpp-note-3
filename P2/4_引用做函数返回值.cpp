#include <iostream>
using namespace std;

/* ��������������ֵ */

// 1. ��Ҫ���ؾֲ���������
int& test01() {
	int a = 10;	// ����������е�ջ��
	return a;
}

// 2. ����������Ϊ��ֵ
int& test02() {
	static int a = 10;	//��̬�����������ȫ������ϵͳ�������ͷ�
	return a;
}

int main()
{
	int &ref = test01();
	cout << "ref = " << ref << endl;	// �ɰ���ܻᱣ��һ�����ݣ��°�ֱ�ӷ��ش�ֵ

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;	// 10
	cout << "ref2 = " << ref2 << endl;	// 10

	test02() = 1000;	// ��Ϊ��ֵ����Ϊa��static���൱�ڷ�����a�����ã����Կ�����Ϊ��ֵ������ȫ����

	// ͬʱ ref2��Ϊtest02�ı���������ref2 Ҳ���� a = 1000
	cout << "ref2 = " << ref2 << endl;	// 1000
	cout << "ref2 = " << ref2 << endl;	// 1000

	system("pause");
	return 0;
}