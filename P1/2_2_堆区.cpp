#include <iostream>
using namespace std;

/* ������������ */
int * func() {
    // ����new���ٶ���
    // new ���ص���һ����ַ������Ҫ��ָ��������
    int *p = new int(10);
    return p;
}


int main()
{

    // ʹ��
    // ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    system("pause");
    return 0;
}