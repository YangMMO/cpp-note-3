#include <iostream>
using namespace std;
#include <string>

/* �������ʹ������� */

class Animal {
public:
	Animal() {
		cout << "Animal()" << endl;
	}
	
	// �� virtual  תΪ������ 
	//virtual ~Animal() {
	//	cout << "~Animal() ������" << endl;
	//}

	// ����������Ĭ�ϻᱨ����Ϊû�о���ʵ�֣�ע�⣺������ �� �������� ��Ҫ���� �� ����ʵ�֣�
	// ���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;
	
	virtual void speak() = 0;
	
};

// ����Animal �������� ʵ��
Animal::~Animal() {
	cout << "~Animal() ��������" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat()" << endl;
		m_Name = new string(name);
	}
	
	void speak() {
		cout << * m_Name << " Meow!" << endl;
	};

	~Cat() {
		if (m_Name != NULL) {
			cout << "~Cat()" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	
	string * m_Name;
};

void test01() {
	Animal * animal = new Cat("Tom");
	animal->speak();
	
	// ����ָ��������ʱ������������������Ӷ�������������ж������ԣ��������ڴ�й¶���
	// ����취���ڸ����н�����תΪ������
	delete animal;
}

int main() {

	test01();

	system("pause");
	return 0;
}