#include <iostream>
using namespace std;
#include <string>

/* ��̬�Ļ������� */

class Animal {
public:
	// virtual �麯��
	// ����ִ��test01������ַ���
	virtual void speak() {
		cout << "Animal speak" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "Dog speak" << endl;
	}
};


class Cat : public Animal {
public:
	// ��д ����������ֵ���� �������� �����б� ��ȫ��ͬ
	void speak() {
		cout << "Cat speak" << endl;
	}
};

// ִ��˵������
// Animal & animal = cat; ���������ָ���������
// C++�������ӵ�����ת��������Ҫ��ǿ������ת��
// ��ַ��󶨣��ڱ���׶ξ���ȷ��������ַ����Ϊ������һ��Animal�������۴��κζ��󣬶���Animal��speak����
// �����ִ�����������speak��������ַ�Ͳ�����ǰ�󶨣��������н׶ν��а󶨣�Ҳ���ǡ���ַ��󶨡�

// ��̬��̬������������
// 1. �̳й�ϵ
// 2. ������д�����麯��

// ��̬��̬ʹ��
// �����ָ������� ָ��������� ������ Animal &animal = �������

void doSpeak(Animal &animal) {	
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);	// Animal speak ��ԭ�򣺵�ַ���

	Dog dog;
	doSpeak(dog);	// Dog speak
}

int main() {

	test01();

	system("pause");
	return 0;
}