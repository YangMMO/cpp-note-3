#include <iostream>
using namespace std;

/* �����﷨ */

int main()
{
    // �����﷨
	int a = 10;
    
    // ��������
	int &ref = a;
	
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	ref = 20;
	
	cout << "a = " << a << endl;	// 20
	cout << "ref = " << ref << endl;	// 20
	
    system("pause");
    return 0;
}