#include <iostream>
using namespace std;
#include <string>
#include <fstream>	// ͷ�ļ�

/* �ı��ļ� ���ļ� */

void test01() {
	// 1. ����ͷ�ļ�#include <fstream>
	// 

	// 2. ����������ifstream ifs;
	ifstream ifs;

	// 3. ���ļ����ж��ļ��Ƿ�򿪳ɹ�ifs.open(���ļ�·����, �򿪷�ʽ);
	ifs.open("./P5/test.txt", ios::in);
	if (!ifs.is_open()) {	// ͨ�� ifs.is_open()������true false
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	// 4. ���������ַ�ʽ��ȡ

	// ��һ��
	// �����ַ������飬��ȫ������Ϊ0
	char buf1[1024] = { 0 };
	// ͨ��ѭ������ifsÿ���ַ�д��buf��
	// ������ѭ��ifs������������˳�ѭ��
	while (ifs >> buf1) {
		cout << buf1 << endl;
	};

	// �ڶ���
	char buf2[1024] = { 0 };
	// ��ȡÿһ��
	// ifs.getline(char, count) �˴�ʹ��sizeof����ȡ���Գ���
	while (ifs.getline(buf2, sizeof(buf2))) {
		cout << buf2 << endl;
	};

	// ������
	// string��ʽ��Ҫ����ͷ�ļ�
	string buf3;
	// ȫ��getline(������, string)
	while (getline(ifs, buf3)) {
		cout << buf3 << endl;
	};

	// ������ �����Ƽ�����Ϊ���Ŀ������룩
	// ����ַ���ȡ
	//char c;
	//// ÿ���Ƿ��ȡ������ֵ��c, ���û��(!= EOF)��ȡ���ļ�β
	//// EOF: end of file 
	//while ((c = ifs.get()) != EOF)
	//{
	//	cout << c << endl;
	//};


	
	// 5. �ر��ļ�ifs.close();
	ifs.close();
	
}

int main() {

	test01();

	system("pause");
	return 0;
}