#include <iostream>
using namespace std;
#include <string>

/* �̳��еĶ���ģ�� */

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son: public Base {
public:
	int m_D;
};

void test01() {
	// ���16 ��4*4�ֽڣ�
	// ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	// ����˽�г�Ա�����������أ����ʲ�������ȷʵ���̳���ȥ��
	cout << sizeof(Son) << endl;
}

// ���ÿ�����Ա������ʾ���߲鿴����ģ��
// ��ת�̷� �� F:
// ��ת��ָ��·���� �� cd: <·��>
// �鿴�����ļ� �� dir
// �鿴���� �� cl /d reportSingleClassLayout<����> <�ļ���>


int main() {

	test01();

	system("pause");
	return 0;
}