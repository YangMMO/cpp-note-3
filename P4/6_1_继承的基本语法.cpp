#include <iostream>
using namespace std;
#include <string>

/* �̳еĻ����﷨ */

// ��ͨʵ��ҳ��
// javaҳ��
//class Java {
//public:
//	void header() {
//		cout << "<header>" << endl;
//	}
//	void footer() {
//		cout << "<footer>" << endl;
//	}
//	void sidebar() {
//		cout << "<sidebar>" << endl;
//	}
//	void content() {
//		cout << "<java ��һ���ĵط�>" << endl;
//	}
//};
//
//// pythonҳ��
//class Python {
//public:
//	void header() {
//		cout << "<header>" << endl;
//	}
//	void footer() {
//		cout << "<footer>" << endl;
//	}
//	void sidebar() {
//		cout << "<sidebar>" << endl;
//	}
//	void content() {
//		cout << "<python ��һ���ĵط�>" << endl;
//	}
//};
//
//void test01() {
//	cout << "java page" << endl;
//	Java java;
//	java.header();
//	java.sidebar();
//	java.content();
//	java.footer();
//
//	cout << "--------------------" << endl;
//
//	cout << "python page" << endl;
//	Python python;
//	python.header();
//	python.sidebar();
//	python.content();
//	python.footer();
//};
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}


/* �̳�ʵ�� */

class BasePage {
public:
	void header() {
		cout << "<header>" << endl;
	}
	void footer() {
		cout << "<footer>" << endl;
	}
	void sidebar() {
		cout << "<sidebar>" << endl;
	}
};

// �̳� BasePage �� ��������
// �﷨��class ���� : �̳з�ʽ ����
// ����Ҳ��Ϊ�������ࡷ�� ����Ҳ��Ϊ�����ࡷ
class Java: public BasePage{
public:
	void content() {
		cout << "<java ��һ���ĵط�>" << endl;
	}
};

class Python : public BasePage {
public:
	void content() {
		cout << "<python ��һ���ĵط�>" << endl;
	}
};

void test01() {
	Java java;
	java.header();
	java.sidebar();
	java.content();
	java.footer();
	
	cout << "--------------------" << endl;
	
	Python python;
	python.header();
	python.sidebar();
	python.content();
	python.footer();
}


int main() {

	test01();

	system("pause");
	return 0;
}