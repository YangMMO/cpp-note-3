#include <iostream>
using namespace std;

/* new������ */

// 1. new�Ļ����﷨
int * func() {
    // �ڶ���������������
    // ���ص��Ǹ��������͵�ָ��
    // new �������뷵��������һ���ģ���int = new int����
    int *p = new int(10);
    return p;
}

void test01() {
    // �����ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷ�
    int *p = func();
    cout << *p << endl;

    // �ͷ����ò����� delete
    delete p;

    //cout << *p << endl; // �ڴ��ѱ��ͷţ��������쳣: ��ȡ����Ȩ�޳�ͻ��
}

// 2. �ڶ�������new��������
void test02() {
    // ����10���������ݵ�����
    int * arr = new int[10];    // 10����10��Ԫ�� ���ص���������׵�ַ
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;   //��ֵ 100~109
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;   // �ͷ�������Ҫ��delete���[]
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}