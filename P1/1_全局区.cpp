#include <iostream>
using namespace std;

/* ȫ���� */
// ȫ�ֱ�������̬����������

// ȫ�ֱ�����û��д�뺯����ı���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main()
{

    // ������ͨ�ľֲ�����
    int a = 10;
    int b = 10;

    cout << "�ֲ����� a �ĵ�ַΪ��" << (long long)&a << endl;
    cout << "�ֲ����� b �ĵ�ַΪ��" << (long long)&b << endl;

    cout << "ȫ�ֱ��� g_a �ĵ�ַΪ��" << (long long)&g_a << endl;
    cout << "ȫ�ֱ��� g_b �ĵ�ַΪ��" << (long long)&g_b << endl;

    // ��̬���� ����ǰ��static
    static int s_a = 10;
    static int s_b = 10;

    cout << "��̬���� s_a �ĵ�ַΪ��" << (long long)&s_a << endl;
    cout << "��̬���� s_b �ĵ�ַΪ��" << (long long)&s_b << endl;

    // ����
    // �����֣��ַ���������const���εı���

    // �ַ������� (˫�����������ľ����ַ�������)
    cout << "�ַ��������ĵ�ַΪ��" << (long long)&"Hello World" << endl;

    // const���εı���
    // const �����֣�const���ε�ȫ�ֱ�����const���εľֲ�����
    cout << "const���ε�ȫ�ֱ��� c_g_a �ĵ�ַΪ��" << (long long)&c_g_a << endl;
    cout << "const���ε�ȫ�ֱ��� c_g_b �ĵ�ַΪ��" << (long long)&c_g_b << endl;

    const int c_l_a = 10; // lΪlocal
    const int c_l_b = 10;

    cout << "const���εľֲ����� c_l_a �ĵ�ַΪ��" << (long long)&c_l_a << endl;
    cout << "const���εľֲ����� c_l_b �ĵ�ַΪ��" << (long long)&c_l_b << endl;

    // �ܽ᣺ֻҪ�Ǵ��ֲ��Ķ�����ͬһ���ڴ�

    system("pause");
    return 0;
}