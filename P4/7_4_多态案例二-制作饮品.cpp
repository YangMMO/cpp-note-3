#include <iostream>
using namespace std;
#include <string>

/* 多态案例二-制作饮品 */

class AbstractDrinking {
public:
	// 煮水
	virtual void Boil() = 0;
	// 冲泡
	virtual void Brew() = 0;
	// 倒入杯中
	virtual void PourInCup() = 0;
	// 加入辅料
	virtual void PutSomething() = 0;

	// 制作饮品
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
	
};

class Coffee : public AbstractDrinking {
public:
	// 煮水
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	// 冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	// 倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	// 加入辅料
	virtual void PutSomething() {
		cout << "加糖和牛奶" << endl;
	}
};

class Tea : public AbstractDrinking {
public:
	// 煮水
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	// 冲泡
	virtual void Brew() {
		cout << "冲泡茶叶" << endl;
	}
	// 倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	// 加入辅料
	virtual void PutSomething() {
		cout << "加枸杞" << endl;
	}
};

// 工厂
void doWork(AbstractDrinking * abs) {
	abs->makeDrink();
	delete abs;
}

void test01() {
	// 制作咖啡
	doWork(new Coffee);
	cout << "-------------------------------------" << endl;
	doWork(new Tea);
}

int main() {

	test01();

	system("pause");
	return 0;
}