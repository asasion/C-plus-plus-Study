#include<iostream>
using namespace std;
/*
案例描述：
电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储）
将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
测试时组装三台不同的电脑进行工作
*/


//抽象出每个零件的类

//CPU抽象类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//显卡抽象类
class GPU
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};


//内存抽象类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
class Computer
{
public: 
	Computer(CPU* cpu, GPU* gpu, Memory* mem)//构造函数接收指针
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}
	//提供工作的函数
	void work()
	{
		//调用接口让零件工作起来
		m_cpu->calculate();

		m_gpu->display();

		m_mem->storage();
	}
	//提供析构函数	释放3个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放GPU零件
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		//释放内存零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU的零件指针
	GPU* m_gpu;//显卡的零件指针
	Memory* m_mem;//内存条的零件指针
	//构造函数中传入三个零件指针，提供工作函数，调用每个零件的接口
	//有三个指针维护这三个变量
};
//具体的零件的厂商类
//Intel厂商
class IntelCPU :public CPU
{
public://重写父类中的纯虚函数
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class IntelGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Intel的GPU开始显示了" << endl;
	}
};
class IntelMem :public Memory
{
public :
	virtual void storage()
	{
		cout << "Intel的内存开始读取数据了" << endl;
	}
};
//Lenovo厂商
class LenovoCPU :public CPU
{
public://重写父类中的纯虚函数
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};
class LenovoGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo的GPU开始显示了" << endl;
	}
};
class LenovoMem :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存开始读取数据了" << endl;
	}
};
void test137601()
{
	CPU* intelcpu = new IntelCPU;//父类指针指向子类的对象
	GPU* intelgpu = new IntelGPU;//***创建在堆区的零件还没有被释放掉***在computer的析构函数中把三个指针给释放掉***
	Memory* intelmem = new IntelMem;
	//创建第一台电脑
	cout << "创建第一台电脑" << endl;
	Computer* computer1 = new Computer(intelcpu, intelgpu, intelmem);
	computer1->work();
	delete computer1;
	//第二台电脑组装
	cout << "创建第二台电脑" << endl;
	//父类指针指向子类的对象//***创建在堆区的零件还没有被释放掉***在computer的析构函数中把三个指针给释放掉***
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMem);
	computer2->work();
	delete computer2;
	//第三台电脑组装
	cout << "创建第三台电脑" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelGPU, new LenovoMem);
	computer3->work();
	delete computer3;
}
int main1376()
{
	test137601();
	system("pause");
	return 0;
}