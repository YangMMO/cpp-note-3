#include <iostream>
using namespace std;

/* struct��class���� */

// Ĭ�ϵķ���Ȩ�޲�ͬ
// 1. struct Ĭ��Ȩ��Ϊ����
// 2. class Ĭ��Ȩ��Ϊ˽��

class C1 {
	int m_A; // Ĭ��Ȩ��˽��
};

struct C2 {
	int m_A; // Ĭ��Ȩ�޹���
};

int main() {

	C1 c1;
	//c1.m_A = 1;	// ���ɷ���
	
	C2 c2;
	c2.m_A = 1;	// �ɷ���
	

	system("pause");
	return 0;
}