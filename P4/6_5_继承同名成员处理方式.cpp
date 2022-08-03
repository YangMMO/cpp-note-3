#include <iostream>
using namespace std;
#include <string>

/* �̳�ͬ����Ա����ʽ */

class Base {
public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base::func()" << endl;
	}

	void func(int a) {
		cout << "Base::func(int a)" << endl;
	}
	
	int m_A;
};

class Son :public Base {
public:
	Son() {
		m_A = 200;
	}

	void func() {
		cout << "Son::func()" << endl;
	}
	
	int m_A;
};

void test01() {
	Son s;
	
	cout << "Son m_A = " << s.m_A << endl;	// �������������m_A;
	
	cout << "Base m_A = " << s.Base::m_A << endl;	//���ʸ����m_A;
}

void test02() {
	Son s;

	s.func();	// ������û������������ø����func����������funcʱ������������func

	s.Base::func();	// ���ø����func

	//s.func(100)	//������������ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ������
	s.Base::func(100);	//ֻ�м������������Чͬ������
}


int main() {

	test01();

	test02();

	system("pause");
	return 0;
}