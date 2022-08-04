#include <iostream>
using namespace std;
#include <string>

/* 多态案例三-电脑组装 */

// 处理器
class CPU {
public:
	virtual void calculate() = 0;
};
// 显卡
class VideoCard {
public:
	virtual void display() = 0;
};
// 内存
class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	Computer(CPU * cpu, VideoCard * vc, Memory * mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	// 工作函数
	void doWork() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	// 提供析构释放三个私有
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
	
private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_mem;
};

// 具体厂商
// 如因特尔
class IntelCPU : public CPU {
public:
	void calculate() {
		cout << "Intel CPU Running" << endl;
	};
};

class IntelVideoCard : public VideoCard {
public:
	void display() {
		cout << "Intel VideoCard Running" << endl;
	};
};

class IntelMemory : public Memory {
public:
	void storage() {
		cout << "Intel Memory Running" << endl;
	};
};

// 如AMD
class AMDCPU : public CPU {
public:
	void calculate() {
		cout << "AMD CPU Running" << endl;
	};
};

class AMDVideoCard : public VideoCard {
public:
	void display() {
		cout << "AMD VideoCard Running" << endl;
	};
};

class AMDMemory : public Memory {
public:
	void storage() {
		cout << "AMD Memory Running" << endl;
	};
};

void test01() {
	// 先创建第一台电脑零件
	// 创建第一台电脑
	cout << "computer 1 " << endl;
	CPU* cpu = new IntelCPU();
	VideoCard* vc = new IntelVideoCard();
	Memory* mem = new IntelMemory();
	Computer* computer1 = new Computer(cpu, vc, mem);
	computer1->doWork();
	delete computer1;

	// 直接new创建第二台
	cout << "---------------------" << endl;
	cout << "computer 2 " << endl;
	Computer* computer2 = new Computer(new AMDCPU, new AMDVideoCard,new AMDMemory);
	computer2->doWork();
	delete computer2;

	// 直接new创建第三台
	cout << "---------------------" << endl;
	cout << "computer 3 " << endl;
	Computer* computer3 = new Computer(new IntelCPU, new AMDVideoCard, new AMDMemory);
	computer3->doWork();
	delete computer3;
};

int main() {

	test01();

	system("pause");
	return 0;
}