#include <iostream>
using namespace std;
#include <string>

/* ��̬�Ļ������� */

class Animal {
public:
	// Animal �ڲ����� vfptr(�麯��ָ�� �� �麯����ָ��)
	// v - virtual
	// f - function
	// ptr - pointer
	// vfptr ָ�� vftable (�麯����)
	// ���ڼ�¼�麯����ַ��& Animal::speak��
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

// Cat �ڲ����� vfptr(�麯��ָ�� �� �麯����ָ��)
// vfptr ָ�� vftable (�麯����)
// ����Ǽ̳й�ϵ����дǰ�������ڼ�¼�麯����ַ��& Animal::speak��
// ���������д������麯����������麯������滻��������麯����ַ��& Cat::speak��

// ���Ե������ָ�������ָ��������󣬾ͷ�����̬ Aaimal & animal = cat;
// ����ִ��animal.speak()ʱ������Cat��vftable��Ѱ�Һ�����Ҳ�������н׶η�������̬�Ķ�̬��
class Cat : public Animal {
public:
	void speak() {
		cout << "Cat speak" << endl;
	}
};


void doSpeak(Animal& animal) {
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02() {
	// ռ��1�ֽ�, ��Ϊֻ�зǾ�̬��Ա����������������ϣ�Ĭ�Ͽն��� = 1��
	// ����������virtual�� = 4��ָ�� = 4�ֽڣ� 64λ��ʾ8�ֽڣ�������Ĭ��x86��32λ = 4��
	cout << "sizeof Animal = " << sizeof(Animal) << endl;	
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}