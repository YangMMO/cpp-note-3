#include <iostream>
using namespace std;
#include <string>

/* 继承方式 */

// 公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;	//父类中的 公共权限 在子类 依旧公共权限
		m_B = 20;	//父类中的 保护权限 在子类 依旧保护权限
		//m_C = 30;	//父类中的 私有权限 在子类 不可访问（报错）
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 10;
	//s1.m_B = 20;	// 在Son1中是 保护权限 在类外 不可访问（报错）
}


// 保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2 {
public:
	void func() {
		m_A = 100;	//父类中的 公共权限 在子类 【变为保护权限】
		m_B = 200;	//父类中的 保护权限 在子类 依旧保护权限
		//m_C = 300;	//父类中的 私有权限 在子类 不可访问（报错）
	}
};

void test02() {
	Son2 s1;
	//s1.m_A = 1000;	// 在Son2中是 保护权限 在类外 不可访问（报错）
	//s1.m_B = 2000;	// 在Son2中是 保护权限 在类外 不可访问（报错）
}


// 私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3 {
public:
	void func() {
		m_A = 100;	//父类中的 公共权限 在子类 【变为私有权限】
		m_B = 200;	//父类中的 保护权限 在子类 【变为私有权限】
		//m_C = 300;	//父类中的 私有权限 在子类 不可访问（报错）
	}
};

void test03() {
	Son3 s1;
	//s1.m_A = 1000;	// 在Son2中是 私有权限 在类外 不可访问（报错）
	//s1.m_B = 2000;	// 在Son2中是 私有权限 在类外 不可访问（报错）
}

// 再验证Son3
class GrandSon :public Son3 {
public:
	void func() {
		//m_A = 1000;	//报错，因为Son3 已经私有，子类GrandSon不可访问（报错）
	}
};


int main() {

	//test01();

	//test02();

	test03();

	system("pause");
	return 0;
}