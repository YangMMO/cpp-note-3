#include <iostream>
using namespace std;
#include <string>

/* ����������������� */

// ��ӡ���

class MyPrint {
public:
	// ���غ������������();

	void operator()(string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;
}

void test01() {
	MyPrint myPrint;
	
	myPrint("hellow world");	// ����ʹ�������ǳ������뺯�����ã���˳�Ϊ�º���

	MyPrint02("hellow world");
}

// �º����ǳ���û�й̶�д��
// �ӷ���

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
	
};

void test02() {
	MyAdd add;
	int result = add(100, 50);
	cout << result << endl;

	// ������������
	cout << MyAdd()(30, 60) << endl;
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}