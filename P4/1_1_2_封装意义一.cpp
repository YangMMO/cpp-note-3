#include <iostream>
using namespace std;
#include <string>

/* ��װ������ */

// ���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student {

	public:
		
		// ���е����Ժ���Ϊͳ��Ϊ��Ա
		// ���ԣ���Ա���ԡ���Ա����
		// ��Ϊ����Ա��������Ա����
		string m_Name;
		int m_Id;
		
		void showStudent() {
			cout << "������" << m_Name << "\t";
			cout << "ѧ�ţ�" << m_Id << endl;
		}

		void setName(string name) {
			m_Name = name;
		}

		void setId(int id) {
			m_Id = id;
		}
};

int main() {

	// ��������ʵ��
	Student stu;
	stu.setName("����");
	stu.setId(1);
	stu.showStudent();

	system("pause");
	return 0;
}