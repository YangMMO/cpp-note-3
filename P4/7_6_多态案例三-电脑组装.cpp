#include <iostream>
using namespace std;
#include <string>

/* ��̬������-������װ */

// ������
class CPU {
public:
	virtual void calculate() = 0;
};
// �Կ�
class VideoCard {
public:
	virtual void display() = 0;
};
// �ڴ�
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

	// ��������
	void doWork() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	// �ṩ�����ͷ�����˽��
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

// ���峧��
// �����ض�
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

// ��AMD
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
	// �ȴ�����һ̨�������
	// ������һ̨����
	cout << "computer 1 " << endl;
	CPU* cpu = new IntelCPU();
	VideoCard* vc = new IntelVideoCard();
	Memory* mem = new IntelMemory();
	Computer* computer1 = new Computer(cpu, vc, mem);
	computer1->doWork();
	delete computer1;

	// ֱ��new�����ڶ�̨
	cout << "---------------------" << endl;
	cout << "computer 2 " << endl;
	Computer* computer2 = new Computer(new AMDCPU, new AMDVideoCard,new AMDMemory);
	computer2->doWork();
	delete computer2;

	// ֱ��new��������̨
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