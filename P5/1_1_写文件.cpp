#include <iostream>
using namespace std;
#include <string>
#include <fstream>	// ͷ�ļ�

/* �ı��ļ� д�ļ� */

void test01() {
	// 1. ����ͷ�ļ�#include <fstream>
	// 

	// 2. ����������ofstream ofs;
	 ofstream ofs;

	// 3. ���ļ�ofs.open(���ļ�·����, �򿪷�ʽ);
	// �����ָ���ļ���·����Ĭ������Ŀ��Ŀ¼
	 ofs.open("./P5/test.txt", ios::out);
	
	// 4. д����ofs << ��д������ݡ�;
	ofs << "hello world" << endl;
	ofs << "����һ��" << endl;
	
	// 5. �ر��ļ�ofs.close();
	ofs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}