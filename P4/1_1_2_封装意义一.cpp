#include <iostream>
using namespace std;
#include <string>

/* 封装的意义 */

// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student {

	public:
		
		// 类中的属性和行为统称为成员
		// 属性：成员属性、成员变量
		// 行为：成员函数、成员方法
		string m_Name;
		int m_Id;
		
		void showStudent() {
			cout << "姓名：" << m_Name << "\t";
			cout << "学号：" << m_Id << endl;
		}

		void setName(string name) {
			m_Name = name;
		}

		void setId(int id) {
			m_Id = id;
		}
};

int main() {

	// 创建对象实例
	Student stu;
	stu.setName("张三");
	stu.setId(1);
	stu.showStudent();

	system("pause");
	return 0;
}