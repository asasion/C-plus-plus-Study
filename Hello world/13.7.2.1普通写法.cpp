#include<iostream>
using namespace std;
#include<string>
//普通写法
class Calculator
{
public:
	int getResult(string oper)//传入一个操作符
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
	int m_Num1;//操作数1
	int m_Num2;//操作数2
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