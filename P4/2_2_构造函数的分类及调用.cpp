#include <iostream>
using namespace std;
#include <string>

/* ���캯���ķ��༰���� */
// ����
// ���ղ������ࣺ �޲ι��죨Ĭ�Ϲ��죬�Զ���ʵ�֣����вι���
// �������ͷ��ࣺ ��ͨ����	��������
class Person {
public:
	// ���캯��
	Person() {
		cout << "�޲ι��� Person()" << endl;
	}

	Person(int a) {
		age = a;
		cout << "�вι��� Person(int a))" << endl;
	}

	// �������캯�����൱��ֱ�ӿ���һ��һģһ�������ݣ����ܸı�ԭ��
	Person(const Person& p) {
		cout << "�������� Person(const Person& p)" << endl;
		// ������������ϵ��������ԣ�������������
		age = p.age;
	}

	// ��������
	~Person() {
		cout << "���� ~Person()" << endl;
	}

	int age;
};

// ����
void test01()
{
	// 1.���ŷ�
	Person p1;	// Ĭ�Ϲ��캯������
	Person p2(10);	// �вι��캯������
	Person p3(p2);	// �������캯������

	//cout << "p2.age = " << p2.age << endl;	// 10
	//cout << "p3.age = " << p3.age << endl;	// 10
	
	// ע������
	// ����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	//Person p1();	// ������Ϊ����Ϊ��һ����������
	//void func();
	
	// 2.��ʾ��
	Person p1;
	Person p2 = Person(10);	// �вι���
	Person p3 = Person(p2);	// ��������

	//Person(10);		// �����ó���Ϊ���������ص㣺��ǰ�н�����ϵͳ�������յ���������

	// ע������
	// ��Ҫ���ÿ������캯�� ��ʼ���������󣬱�������Ϊ Person(p3) === Person p3;
	//Person(p3);	// ����


	// 3.��ʽת����
	Person p4 = 10;	// �вι��� ���� Person p4 = Person(10)
	Person p5 = p4;	// �������� ���� Person p5 = Person(p4)
}

int main() {

	// 
	test01();

	system("pause");
	return 0;
}