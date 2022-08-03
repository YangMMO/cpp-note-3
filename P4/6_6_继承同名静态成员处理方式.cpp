#include <iostream>
using namespace std;
#include <string>

/* �̳�ͬ����̬��Ա����ʽ */

class Base {
public:
	static int m_A;
	
	static void func() {
		cout << "Base::func()" << endl;
	}
	static void func(int a) {
		cout << "Base::func(int a)" << endl;
	}
};

int Base::m_A = 100;	// �����ʼ��Ϊ100��

class Son: public Base {
public:
	static int m_A;
	
	static void func() {
		cout << "Son::func()" << endl;
	}
};

int Son::m_A = 200;

// ͬ����̬����
void test01() {
	// 1.��һ�ַ��ʷ�ʽ��ͨ���������
	Son s;
	cout << "s.m_A = " << s.m_A << endl;
	cout << "s.Base::m_A = " << s.Base::m_A << endl;

	// 2. ͨ����������
	cout << "Son::m_A = " << Son::m_A << endl;
	cout << "Base::m_A = " << Base::m_A << endl;
	// д��˵���� ͨ����������:: ���ʸ�����������:: �ĳ�Ա
	cout << "Son::Base::m_A = " << Son::Base::m_A << endl;
}

// ͬ����̬����
void test02() {
	// 1. ͨ���������
	Son s;
	s.func();
	s.Base::func();

	// 2. ͨ������
	Son::func();
	Son::Base::func();


	// ע�⣺�Ӹ�����ͬ����Ҳ�����ظ�������ͬ����������������أ��������������
	Son::Base::func(100);
}


int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}