#include <iostream>
using namespace std;
#include <string>

/* 多态案例一-计算器类 */

// 普通写法

class Calculator {
public:
	// 如果默认加减乘除，在后续扩展中，将不断对getResult进行修改
	// 所以提倡开闭原则
	// 对扩展进行开放，对修改进行关闭
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
		else if (oper == "/") {
			return m_Num1 / m_Num2;
		}
	}
	
	int m_Num1;	// 操作数1
	int m_Num2;	// 操作数2
};

void test01() {
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
	cout << c.m_Num1 << " / " << c.m_Num2 << " = " << c.getResult("/") << endl;
}


// 利用多态实现计算器
// 多态好处：
// 1. 组织结构清晰
// 2. 可读性强
// 3. 前后期的扩展及维护性高

// 实现计算器抽象类
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

// 加法计算器类
class AddCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};

// 减法计算器类
class SubCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

// 乘法计算器类
class MulCalcultor : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

// 除法计算器类
class DivCalcultor : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 / m_Num2;
	}
};

void test02() {
	// 父类的指针指向 子类的对象
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout<< abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;	//用完需要销毁
	
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	abc = new MulCalcultor;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	
	abc = new DivCalcultor;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " / " << abc->m_Num2 << " = " << abc->getResult() << endl;
}

int main() {

	//test01();
	
	test02();

	system("pause");
	return 0;
}