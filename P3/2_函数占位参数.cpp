#include <iostream>
using namespace std;

/* ����ռλ���� */

// ռλ����
// �ڶ���int��Ϊռλʹ�ã�ʹ��ʱ�����紫���Ӧ���͵Ĳ���
// �ֽ׶��ò�����������ܻ����õ�
void func01(int a, int) {
	cout << a << endl;
}

// ռλ������Ĭ��ֵ����ʹ��ʱ�ɲ�����ռλ����
void func02(int a, int = 10) {
    cout << a << endl;
}

int main()
{
    func01(10, 20);
	
    func02(10);

    system("pause");
    return 0;
}