#include <iostream>
using namespace std;
#include <string>

/* ��Ա�����ͳ�Ա�����ֿ��洢 */

class Person {
	int m_A;	// �Ǿ�̬��Ա����,��Ϊ�ǿն�������ռ4�ֽ�
	static int m_B;	// ��̬��Ա��������Ϊ��̬������������ϵ� ���Ի���4�ֽ�

	void func() {	// �Ǿ�̬��Ա���������Ա������ͬ����������Ķ����ϣ����Ի���4�ֽ�
	}

	void func2() {	// ��̬��Ա�������Ի��Ǻ�����ֻ��һ�ݣ���������Ķ����ϣ����Ի���4�ֽ�
	}
};

int Person::m_B = 0;	

void test01() {
	Person p;
	// �ն���ռ���ڴ�ռ�Ϊ��1
	// C++���������ÿ���ն������һ���ֽڿռ䣬��Ϊ�����ֿն����ռ�ڴ��λ��
	// ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02() {
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}