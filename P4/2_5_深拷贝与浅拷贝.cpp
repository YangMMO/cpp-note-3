#include <iostream>
using namespace std;
#include <string>

/* 深拷贝与浅拷贝 */



class Person {
public:
	Person() {
		cout << "Person()" << endl;
	}

	Person(int age, int height) {
		m_Age = age;
		m_Height =  new int(height);	// 开辟一个新的数据在堆区，返回的是一个int *, 然后指针m_Height去接收堆区的数据
		cout << "Person(int age)" << endl;
	}
	
	// 自己实现拷贝构造函数 解决浅拷贝带来的指针堆区释放问题
	Person(const Person& p) {
		cout << "Person(const Person& p)" << endl;
		//m_Height = p.m_Height;	// 默认编译器是这么写的，所以有问题
		
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);	// 拷贝的新m_Height = 解引用p.m_Height
	}

	~Person() {
		// 析构，将堆区开辟的数据做释放操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "~Person()" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01() {
	Person p1(18, 160);
	cout << "p1 age = " << p1.m_Age << "\t p1 height = " << *p1.m_Height <<  endl;

	Person p2(p1);
	cout << "p2 age = " << p2.m_Age << "\t p2 height = " << *p2.m_Height << endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}