#include <iostream>
using namespace std;
#include <string>

/* 成员函数做友元 */

class Building;	// 先告诉编译器有这个类，防止报错
class GoodGay {
public:
	GoodGay();
	void visit();	//可以访问Building中的私有成员
	void visit2();	//不可以访问Building中的私有成员

	Building* building;
};

class Building {
	// 告诉编译器，GoodGay下的visit函数作为该类的朋友，可以访问私有
	friend void GoodGay::visit();
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
	building = new Building();	// 右边创建Building堆区，用左buliding指针进行维护
}

void GoodGay::visit() {
	// 因为GoodGay::visit()是building的朋友，可以访问私有
	cout << "visit正在访问：" << building->m_SittingRoom << endl;
	cout << "visit正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	// GoodGay::visit2()不是building的朋友，不可以访问私有
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit2正在访问：" << building->m_BedRoom << endl;	// 报错，不可访问私有
}

void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main() {

	test01();

	system("pause");
	return 0;
}