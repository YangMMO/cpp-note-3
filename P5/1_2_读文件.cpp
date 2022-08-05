#include <iostream>
using namespace std;
#include <string>
#include <fstream>	// 头文件

/* 文本文件 读文件 */

void test01() {
	// 1. 包含头文件#include <fstream>
	// 

	// 2. 创建流对象ifstream ifs;
	ifstream ifs;

	// 3. 打开文件并判断文件是否打开成功ifs.open(“文件路径”, 打开方式);
	ifs.open("./P5/test.txt", ios::in);
	if (!ifs.is_open()) {	// 通过 ifs.is_open()；返回true false
		cout << "打开文件失败" << endl;
		return;
	}

	// 4. 读数据四种方式读取

	// 第一种
	// 声明字符型数组，并全部重置为0
	char buf1[1024] = { 0 };
	// 通过循环，将ifs每个字符写入buf中
	// 机制是循环ifs，如果读完则退出循环
	while (ifs >> buf1) {
		cout << buf1 << endl;
	};

	// 第二种
	char buf2[1024] = { 0 };
	// 读取每一行
	// ifs.getline(char, count) 此处使用sizeof来获取属性长度
	while (ifs.getline(buf2, sizeof(buf2))) {
		cout << buf2 << endl;
	};

	// 第三种
	// string方式需要包含头文件
	string buf3;
	// 全局getline(输入流, string)
	while (getline(ifs, buf3)) {
		cout << buf3 << endl;
	};

	// 第四种 （不推荐，因为中文可能乱码）
	// 逐个字符读取
	//char c;
	//// 每次是否读取到并赋值给c, 如果没有(!= EOF)读取到文件尾
	//// EOF: end of file 
	//while ((c = ifs.get()) != EOF)
	//{
	//	cout << c << endl;
	//};


	
	// 5. 关闭文件ifs.close();
	ifs.close();
	
}

int main() {

	test01();

	system("pause");
	return 0;
}