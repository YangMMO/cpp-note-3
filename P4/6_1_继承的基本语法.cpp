#include <iostream>
using namespace std;
#include <string>

/* 继承的基本语法 */

// 普通实现页面
// java页面
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
//		cout << "<java 不一样的地方>" << endl;
//	}
//};
//
//// python页面
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
//		cout << "<python 不一样的地方>" << endl;
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


/* 继承实现 */

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

// 继承 BasePage 的 公共内容
// 语法：class 子类 : 继承方式 父类
// 子类也称为《派生类》， 父类也称为《基类》
class Java: public BasePage{
public:
	void content() {
		cout << "<java 不一样的地方>" << endl;
	}
};

class Python : public BasePage {
public:
	void content() {
		cout << "<python 不一样的地方>" << endl;
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