#include<iostream>
using namespace std;
#include<string>
//��ͨд��
class Calculator
{
public:
	int getResult(string oper)//����һ��������
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if(oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		} 
	}
	int m_Num1;//������1
	int m_Num2;//������2
};
void test1372101()
{
	Calculator c1;
	c1.m_Num1 = 10;
	c1.m_Num2 = 10;
	cout << c1.m_Num1 << "+" << c1.m_Num2 << "=" << c1.getResult("+") << endl;
	cout << c1.m_Num1 << "-" << c1.m_Num2 << "=" << c1.getResult("-") << endl;
	cout << c1.m_Num1 << "*" << c1.m_Num2 << "=" << c1.getResult("*") << endl;
}
int main13721()
{
	test1372101();
	system("pause");
	return 0;

}