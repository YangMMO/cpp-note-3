#include <iostream>
using namespace std;
#include <string>

/* ��̬��Ա���� */

class Person {
public:
	//�� ���ж�����ͬһ������
	//�� ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
		m_A = 100;	// ��̬��Ա���ʾ�̬����
		//m_B = 200;	// ������Ϊ�Ǿ�̬��Ա�������ǹ���ͬһ�����ݣ����Ա��봴�����󣬵���̬����static���ڴ���ֻ��һ�ݣ��޷��������ĸ������m_B
		cout << "static func()" << endl;
	}
	
	static int m_A;
	int m_B;	// �Ǿ�̬��Ա����


	// ��̬��Ա����Ҳ�з���Ȩ��
private:
	static void func2() {
		cout << "static func2()" << endl;
	}
};

int Person::m_A = 0;

void test01() {
	// ���ַ��ʷ�ʽ
	// 1. ͨ���������
	Person p;
	p.func();

	// 2. ͨ����������
	Person::func();

	//Person::func2();	// ������Ϊ˽�У�������ʲ�������˽�г�Ա����
}


int main() {

	test01();
	
	system("pause");
	return 0;
}