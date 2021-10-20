#include<iostream>
using namespace std;
/*
����������
������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���
*/


//�����ÿ���������

//CPU������
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�Կ�������
class GPU
{
public:
	//�������ʾ����
	virtual void display() = 0;
};


//�ڴ������
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class Computer
{
public: 
	Computer(CPU* cpu, GPU* gpu, Memory* mem)//���캯������ָ��
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void work()
	{
		//���ýӿ��������������
		m_cpu->calculate();

		m_gpu->display();

		m_mem->storage();
	}
	//�ṩ��������	�ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ�GPU���
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		//�ͷ��ڴ����
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU�����ָ��
	GPU* m_gpu;//�Կ������ָ��
	Memory* m_mem;//�ڴ��������ָ��
	//���캯���д����������ָ�룬�ṩ��������������ÿ������Ľӿ�
	//������ָ��ά������������
};
//���������ĳ�����
//Intel����
class IntelCPU :public CPU
{
public://��д�����еĴ��麯��
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class IntelGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Intel��GPU��ʼ��ʾ��" << endl;
	}
};
class IntelMem :public Memory
{
public :
	virtual void storage()
	{
		cout << "Intel���ڴ濪ʼ��ȡ������" << endl;
	}
};
//Lenovo����
class LenovoCPU :public CPU
{
public://��д�����еĴ��麯��
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};
class LenovoGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo��GPU��ʼ��ʾ��" << endl;
	}
};
class LenovoMem :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ濪ʼ��ȡ������" << endl;
	}
};
void test137601()
{
	CPU* intelcpu = new IntelCPU;//����ָ��ָ������Ķ���
	GPU* intelgpu = new IntelGPU;//***�����ڶ����������û�б��ͷŵ�***��computer�����������а�����ָ����ͷŵ�***
	Memory* intelmem = new IntelMem;
	//������һ̨����
	cout << "������һ̨����" << endl;
	Computer* computer1 = new Computer(intelcpu, intelgpu, intelmem);
	computer1->work();
	delete computer1;
	//�ڶ�̨������װ
	cout << "�����ڶ�̨����" << endl;
	//����ָ��ָ������Ķ���//***�����ڶ����������û�б��ͷŵ�***��computer�����������а�����ָ����ͷŵ�***
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMem);
	computer2->work();
	delete computer2;
	//����̨������װ
	cout << "��������̨����" << endl;
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