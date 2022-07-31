#include <iostream>
using namespace std;
#include <string>

/* ������������� */

// �Զ��������
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	};
	
	// ����++�������ǰ�ã�
	MyInteger& operator++() {
		m_Num++;	// ��ôд������Ϊ���ص���void, cout��һ��void
		return *this;	// ������Ҫ��������Ľ�����this����MyInteger����, Ϊʲô������Ҫ & ���ã���Ϊ����ֵ�Ƿ���һ��������������ʱ����������a������������++(++a)�������++�Ǽ�����ʱ�����ϣ�������a������++���ᵼ�½����Ԥ�ڲ�һ�£����Է���������Ϊ�˶�һ�����ݽ��н��в���
	};
	
	// ����++����������ã�
	// ����ֵ������Ϊ�������������Դ˴�����Ϊ ���ز�ͬ���� ��operator++ �ǳ�ͻ�ģ����Դ˴���int
	// int ����ռλ������������������ǰ�úͺ��õ���
	// ��Ϊ���ص��Ǿֲ��������ûᱻ�ͷţ����Է��ص�ֵ������ǰ�÷������ã����÷���ֵ
	MyInteger operator++(int) {
		// �� ��¼ԭ���ݣ�
		MyInteger temp = *this;
		
		// �� ��������Ϊ���ص���Ԫ���ݣ������ǵڶ���cout�Ż���ʾ�õ���ֵ��
		m_Num++;

		// ����Դ����
		return temp;
	};

private:
	int m_Num;
};

// Ϊ�����������myInteger�� ������<<�����
ostream& operator<< (ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
};

void test01() {
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
	
}

int main() {
	
	//test01();
	test02();

	system("pause");
	return 0;
}