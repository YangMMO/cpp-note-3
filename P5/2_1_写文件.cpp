#include <iostream>
using namespace std;
#include <string>
#include <fstream>

/* 二进制文件 写文件 */

class Person{
public:
	char m_Name[64];	// 姓名
	int m_Age;	// 年龄

};

void test01() {
	// 关于路径：可写 / \，window中写反义（\\）
	ofstream ofs("P5\\test_binary.txt", ios::binary | ios::out);	// 可直接创建流对象时创建文件
	//ofstream ofs;
	//ofs.open(".\P5\test.txt", ios::binary | ios::out);
	Person p = { "张三", 18 };	//创建时初始化
	
	// （const char *）:强转， 因为&p返回的是Person *, 强转后可输出
	// 第二个参数：长度, 因为是写入p，所以写长度为Person
	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();

	
}

int main() {

	test01();

	system("pause");
	return 0;
}