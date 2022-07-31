#include <iostream>
using namespace std;
#include <string>

/* 递增运算符重载 */

// 自定义的整形
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	};
	
	// 重载++运算符（前置）
	MyInteger& operator++() {
		m_Num++;	// 这么写报错，因为返回的是void, cout是一个void
		return *this;	// 所以需要返回自身的解引用this，用MyInteger引用, 为什么返回需要 & 引用，因为返回值是返回一个拷贝出来的临时变量，比如a是声明变量。++(++a)括号外的++是加在临时变量上，不是在a的自身++，会导致结果与预期不一致；所以返回引用是为了对一个数据进行进行操作
	};
	
	// 重载++运算符（后置）
	// 返回值不能作为重载条件，所以此处会认为 返回不同类型 的operator++ 是冲突的，所以此处加int
	// int 代表占位参数，可与用于区分前置和后置递增
	// 因为返回的是局部对象引用会被释放，所以返回的值，所以前置返回引用，后置返回值
	MyInteger operator++(int) {
		// 先 记录原数据，
		MyInteger temp = *this;
		
		// 后 递增（因为返回的是元数据，所以是第二次cout才会显示该递增值）
		m_Num++;

		// 返回源数据
		return temp;
	};

private:
	int m_Num;
};

// 为了能正常输出myInteger， 先重载<<运算符
ostream& operator<< (ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
};

void test01() {
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
	
}

int main() {
	
	//test01();
	test02();

	system("pause");
	return 0;
}