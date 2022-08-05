#include <iostream>
using namespace std;
#include <string>
#include <fstream>	// 头文件

/* 文本文件 写文件 */

void test01() {
	// 1. 包含头文件#include <fstream>
	// 

	// 2. 创建流对象ofstream ofs;
	 ofstream ofs;

	// 3. 打开文件ofs.open(“文件路径”, 打开方式);
	// 如果不指定文件夹路径，默认在项目根目录
	 ofs.open("./P5/test.txt", ios::out);
	
	// 4. 写数据ofs << “写入的数据”;
	ofs << "hello world" << endl;
	ofs << "测试一下" << endl;
	
	// 5. 关闭文件ofs.close();
	ofs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}