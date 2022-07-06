#include <iostream>
using namespace std;

/* struct和class区别 */

// 默认的访问权限不同
// 1. struct 默认权限为公共
// 2. class 默认权限为私有

class C1 {
	int m_A; // 默认权限私有
};

struct C2 {
	int m_A; // 默认权限公有
};

int main() {

	C1 c1;
	//c1.m_A = 1;	// 不可访问
	
	C2 c2;
	c2.m_A = 1;	// 可访问
	

	system("pause");
	return 0;
}