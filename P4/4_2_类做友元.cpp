#include <iostream>
using namespace std;
#include <string>

/* ������Ԫ */

class Building;	// �ȸ��߱�����������࣬��ֹ����
class GoodGay {
public:
	GoodGay();
	void visit();	//�ιۺ��� ����Building�г�Ա�ĺ���

	Building* building;
};

class Building {
	// GoodGay��Building�ĺ����ѣ����Է���˽��
	friend class GoodGay;
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
	building = new Building();	// ������� = ���ڶ����������
}

void GoodGay::visit() {
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
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