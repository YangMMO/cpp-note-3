#include <iostream>
using namespace std;
#include <string>

/* ��Ա��������Ԫ */

class Building;	// �ȸ��߱�����������࣬��ֹ����
class GoodGay {
public:
	GoodGay();
	void visit();	//���Է���Building�е�˽�г�Ա
	void visit2();	//�����Է���Building�е�˽�г�Ա

	Building* building;
};

class Building {
	// ���߱�������GoodGay�µ�visit������Ϊ��������ѣ����Է���˽��
	friend void GoodGay::visit();
public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};


// ����ȥд��Ա���� Building�µĹ��캯��
Building::Building() {
	m_SittingRoom = "SittingRoom";
	m_BedRoom = "BedRoom";
};

GoodGay::GoodGay() {
	// ������������
	building = new Building();	// �ұߴ���Building����������bulidingָ�����ά��
}

void GoodGay::visit() {
	// ��ΪGoodGay::visit()��building�����ѣ����Է���˽��
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	// GoodGay::visit2()����building�����ѣ������Է���˽��
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit2���ڷ��ʣ�" << building->m_BedRoom << endl;	// �������ɷ���˽��
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