#include<iostream>
using namespace std;
//�������չ�������µĹ�����Ҫ�޸�Դ�룬��ʹ�ö�̬�Ͳ���Ҫ
//����ԭ�򣺶���չ���п��ţ����޸Ľ��з��
//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class AbstractCalculator//������
{
public:
	virtual int getResult() = 0;//�麯��
	int m_Num1=0;
	int m_Num2=0;
};
class AddCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		m_Num1 = 10;
		m_Num2 = 10;
		return m_Num1 + m_Num2;
	}
};
class SubCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1-m_Num2;
	}
};
class MulCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test1372201()
{
	//��̬ʹ������
	//����ָ���������ָ���������
	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 1;
	abc->m_Num2 = 1;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//�����ǵ�����
	delete abc;
	//��������
	abc =new SubCalculator;
	abc->m_Num1 = 1;
	abc->m_Num2 = 1;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
	//�˷�����
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main13722()
{
	test1372201();
	system("pause");
	return 0;
}