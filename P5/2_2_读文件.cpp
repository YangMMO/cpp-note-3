#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/* �������ļ� ���ļ� */

// ��ȡʱҲҪ׼������
class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
	ifstream ifs;
	ifs.open(".\\P5\\test_binary.txt", ios::binary | ios::in);
	
	if (!ifs.is_open()) {
		cout << "open file error" << endl;
		return;
	}

	// ׼��һ����
	Person p;
	//cout << "p.m_Age = " << p.m_Age << endl;	// �գ��޷�����
	//cout << "p.m_Name = " << p.m_Name << endl;
	
	// ���ݵ�ַΪ p������ҪǿתΪ(char *)
	// ��һ����⣬����ȡ�����ݣ�ͨ��(char *)ǿת�����ŵ� p �ĵ�ַ��
	ifs.read( (char*) & p, sizeof(Person));

	cout << "p.m_Age = " << p.m_Age << endl;
	cout << "p.m_Name = " << p.m_Name << endl;

	ifs.close();

	
	
}

int main() {

	test01();

	system("pause");
	return 0;
}