#include <iostream>
using namespace std;
#include <string>

/* ��ϰ����1 */

// �����������(Cube)
// 1. ������������������
// 2. �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

class Cube {
public:
	// ���ó����
	void setLength(int l) {
		m_L = l;
	}
	
	void setWidth(int w) {
		m_W = w;
	}
	
	void setHeight(int h) {
		m_H = h;
	}
	
	// ��ȡ�����
	int getLength() {
		return m_L;
	}
	
	int getWidth() {
		return m_W;
	}
	
	int getHeight() {
		return m_H;
	}

	// ��ȡ���������
	int calculateS() {
		return 2*m_L*m_W + 2*m_L*m_H + 2*m_W*m_H;
	}

	// ��ȡ���������
	int calculateV() {
		return m_L*m_W*m_H;
	}

	// ��Ա�����ж��Ƿ����
	bool isSameByClass (Cube& c) {
		if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight()) {
			return true;
		}

		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};

// ����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
		return true;
	}

	return false;
}

int main() {

	// ����������
	Cube c1;
	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(10);

	// 600
	cout << "c1�������" << c1.calculateS() << endl;
	// 1000
	cout << "c1�������" << c1.calculateV() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(10);
	

	// ����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1 c2 ���" << endl;
	}
	else
	{
		cout << "c1 c2 �����" << endl;
	}


	// ���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);

	if (ret) {
		cout << "��Ա������c1 c2 ���" << endl;
	}
	else
	{
		cout << "��Ա������c1 c2 �����" << endl;
	}


	system("pause");
	return 0;
}