#include<iostream>
using namespace std;
/*
����������
������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��
���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
���ȣ�	1����ˮ2�����ݿ���3�����뱭��4�����Ǻ�ţ��
���Ҷ��1����ˮ2�����ݲ�Ҷ3�����뱭��4��������
*/
class AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//��������
class Coffee :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
//���Ҷ
class Tea :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�������ʡ����" << endl;
	}
};
//��������
void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;//��ֹ�ڴ�й©���ͷŶ����ڴ�
}
void test137401()
{
	//��������
	doWork(new Coffee);
	cout << "----------------" << endl;
	doWork(new Tea);
	//��̬��һ���ӿ��ж�����̬��ͬһ���ӿڴ��벻ͬ�Ķ���
	//��������ʱ�򣬲���Ҫ��ԭ���Ĵ���
}
int main1374()
{
	test137401();
	system("pause");
	return 0;
}