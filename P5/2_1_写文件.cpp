#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/* �������ļ� д�ļ� */

class Person{
public:
	char m_Name[64];	// ����
	int m_Age;	// ����

};

void test01() {
	// ����·������д / \��window��д���壨\\��
	ofstream ofs("P5\\test_binary.txt", ios::binary | ios::out);	// ��ֱ�Ӵ���������ʱ�����ļ�
	//ofstream ofs;
	//ofs.open(".\P5\test.txt", ios::binary | ios::out);
	Person p = { "����", 18 };	//����ʱ��ʼ��
	
	// ��const char *��:ǿת�� ��Ϊ&p���ص���Person *, ǿת������
	// �ڶ�������������, ��Ϊ��д��p������д����ΪPerson
	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();

	
}

int main() {

	test01();

	system("pause");
	return 0;
}