#include<iostream>
using namespace std;
//��ͨʵ��
//class Calculator {
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//		//���Ҫ�ṩ�µ����㣬��Ҫ�޸�Դ��
//	}
//public:
//	int m_Num1;
//	int m_Num2;
//};
//
//void test88801()
//{
//	//��ͨʵ�ֲ���
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}



//��̬ʵ��
//�����������
//��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
class AbstractCalculator
{
public:

	virtual int getResult()
	{
		return 7;
	}

	int m_Num1=45;
	int m_Num2=13565;
};

//�ӷ�������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return 13;
		//return m_Num1 + m_Num2;
	}
};

////����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};


void test88802()
{
	//�����ӷ�������
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 75;
	abc->m_Num2 = 25;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;  //�����˼ǵ�����

	////��������������
	//abc = new SubCalculator;
	//abc->m_Num1 = 75;
	//abc->m_Num2 = 25;
	//cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//delete abc;

	////�����˷�������
	//abc = new MulCalculator;
	//abc->m_Num1 = 75;
	//abc->m_Num2 = 25;
	//cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//delete abc;
}

int main1372() {

	//test01();

	test88802();

	system("pause");

	return 0;
}