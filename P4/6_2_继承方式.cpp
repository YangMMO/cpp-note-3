#include <iostream>
using namespace std;
#include <string>

/* �̳з�ʽ */

// �����̳�
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;	//�����е� ����Ȩ�� ������ ���ɹ���Ȩ��
		m_B = 20;	//�����е� ����Ȩ�� ������ ���ɱ���Ȩ��
		//m_C = 30;	//�����е� ˽��Ȩ�� ������ ���ɷ��ʣ�����
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 10;
	//s1.m_B = 20;	// ��Son1���� ����Ȩ�� ������ ���ɷ��ʣ�����
}


// �����̳�
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2 {
public:
	void func() {
		m_A = 100;	//�����е� ����Ȩ�� ������ ����Ϊ����Ȩ�ޡ�
		m_B = 200;	//�����е� ����Ȩ�� ������ ���ɱ���Ȩ��
		//m_C = 300;	//�����е� ˽��Ȩ�� ������ ���ɷ��ʣ�����
	}
};

void test02() {
	Son2 s1;
	//s1.m_A = 1000;	// ��Son2���� ����Ȩ�� ������ ���ɷ��ʣ�����
	//s1.m_B = 2000;	// ��Son2���� ����Ȩ�� ������ ���ɷ��ʣ�����
}


// ˽�м̳�
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3 {
public:
	void func() {
		m_A = 100;	//�����е� ����Ȩ�� ������ ����Ϊ˽��Ȩ�ޡ�
		m_B = 200;	//�����е� ����Ȩ�� ������ ����Ϊ˽��Ȩ�ޡ�
		//m_C = 300;	//�����е� ˽��Ȩ�� ������ ���ɷ��ʣ�����
	}
};

void test03() {
	Son3 s1;
	//s1.m_A = 1000;	// ��Son2���� ˽��Ȩ�� ������ ���ɷ��ʣ�����
	//s1.m_B = 2000;	// ��Son2���� ˽��Ȩ�� ������ ���ɷ��ʣ�����
}

// ����֤Son3
class GrandSon :public Son3 {
public:
	void func() {
		//m_A = 1000;	//������ΪSon3 �Ѿ�˽�У�����GrandSon���ɷ��ʣ�����
	}
};


int main() {

	//test01();

	//test02();

	test03();

	system("pause");
	return 0;
}