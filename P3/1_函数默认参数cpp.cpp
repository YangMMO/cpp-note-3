#include <iostream>
using namespace std;

/* ����Ĭ�ϲ��� */

// ���û�д���������ʹ��Ĭ��ֵ������д�����ʹ�ô�������
int func(int a, int b = 20, int c = 30) {
    return a + b + c;
}

// ע������

// 1.���ĳ��λ��������Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
// ʾ�� 1
int func02(int a, int b = 20, int c = 30, int d = 40) {   // ����b������Ĭ�ϣ�������c��dҲ������Ĭ�ϣ����򱨴�
    return a + b + c + d;
}

// 2. �������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// ʾ�� 2
// ��������
int func03(int a, int b = 20, int c = 30) {
}

// ����ʵ�֣����Ǵ���ģ������Ѿ�����Ĭ�ϲ�������ʵ�ֲ����У�����ᱨ�������ض�����
//int func03(int a, int b = 20, int c = 30) {
//	return a + b + c;
//}

// ��ȷ ʵ��д���� ����������ʵ��ֻ��һ����Ĭ�ϲ���������ͬʱӵ��
int func03(int a,int b,int c) {
	return a + b + c;
}

int main()
{
    int a = 10;
	
	cout << func(a) << endl;
    cout << func(a, 10) << endl;
    

    system("pause");
    return 0;
}