#include <iostream>
using namespace std;
#include <string>

/* 类做友元 */

class Building;	// 先告诉编译器有这个类，防止报错
class GoodGay {
public:
	GoodGay();
	void visit();	//参观函数 访问Building中成员的函数

	Building* building;
};

class Building {
	// GoodGay是Building的好朋友，可以访问私有
	friend class GoodGay;
public:
	Building();
	
public:
	string m_SittingRoom;
	
private:
	string m_BedRoom;
};


// 类外去写成员函数 Building下的构造函数
Building::Building() {
	m_SittingRoom = "SittingRoom";
	m_BedRoom = "BedRoom";
};

GoodGay::GoodGay() {
	// 创建建筑对象
	building = new Building();	// 左边名称 = 类内定义的属性名
}

void GoodGay::visit() {
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {

	test01();

	system("pause");
	return 0;
}