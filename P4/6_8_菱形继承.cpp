#include <iostream>
using namespace std;
#include <string>

/* �̳еĻ����﷨ */

class Animal {
public:
	int m_Age;
};

// ���� ��̳� ������μ̳�����,
// �̳�ǰ�ӹؼ��� virtual
// �� Animal ��Ϊ �����
class Sheep:virtual public Animal {
public:

};

class Tuo :virtual public Animal {
public:
	
};

class SheepTuo : public Sheep, public Tuo {
public:
	
};

void test01() {
	SheepTuo st;
	//st.m_Age = 18; //�������μ̳ж�����,��Ҫ��������
	
	// ���ʹ����������ᷢ�����⣬���μ̳����������ݣ�������Դ�˷�
	st.Sheep::m_Age = 18;	
	st.Tuo::m_Age = 28;

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;	// 18
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;	// 28

	// Ҫ�����ʹ�ÿ�����Ա���ߣ�����cout���룬����̳к󣬴�ӡ 28
	// �൱�ڹ������ݣ�ֻ��һ��
	// ��̳к������ʹ�����·�ʽ����
	cout << "st.m_Age = " << st.m_Age << endl;	// 28
	
	// ͨ�������߹��ߣ����Կ����̳е��� {vbptr}
	// v - ���� virtual
	// b - ���� base
	// ptr - ָ�� pointer
	// {vbptr} ָ�� vbtable��������
}


int main() {

	test01();

	system("pause");
	return 0;
}