#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/* 二进制文件 读文件 */

// 读取时也要准备好类
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

	// 准备一个类
	Person p;
	//cout << "p.m_Age = " << p.m_Age << endl;	// 空，无法运行
	//cout << "p.m_Name = " << p.m_Name << endl;
	
	// 数据地址为 p，但需要强转为(char *)
	// 另一种理解，将读取的数据，通过(char *)强转，并放到 p 的地址中
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