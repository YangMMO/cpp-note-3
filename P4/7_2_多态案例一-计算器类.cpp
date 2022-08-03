#include <iostream>
using namespace std;
#include <string>

/* ��̬����һ-�������� */

// ��ͨд��

class Calculator {
public:
	// ���Ĭ�ϼӼ��˳����ں�����չ�У������϶�getResult�����޸�
	// �����ᳫ����ԭ��
	// ����չ���п��ţ����޸Ľ��йر�
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
	
	int m_Num1;	// ������1
	int m_Num2;	// ������2
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


// ���ö�̬ʵ�ּ�����
// ��̬�ô���
// 1. ��֯�ṹ����
// 2. �ɶ���ǿ
// 3. ǰ���ڵ���չ��ά���Ը�

// ʵ�ּ�����������
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

// �ӷ���������
class AddCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};

// ������������
class SubCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

// �˷���������
class MulCalcultor : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

// ������������
class DivCalcultor : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 / m_Num2;
	}
};

void test02() {
	// �����ָ��ָ�� ����Ķ���
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout<< abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;	//������Ҫ����
	
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