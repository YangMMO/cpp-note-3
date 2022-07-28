#include <iostream>
using namespace std;
#include <string>

/* 全局函数做友元 */

class Building
{
	// 代表goodGay函数是Building类的好朋友，可以访问私有成员
	friend void goodGay(Building& building);	
	
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	
public:
	string m_SittingRoom;	// 客厅
	
private:
	string m_BedRoom;	// 卧室
		
};

// 全局函数
void goodGay(Building &building)
{
	cout << "全局函数 正在访问：" << building.m_SittingRoom << endl;
	cout << "全局函数 正在访问：" << building.m_BedRoom << endl;	// 正常情况无法访问私有
}

void test01()
{
	Building building;
	goodGay(building);
}

int main() {

	test01();

	system("pause");
	return 0;
}