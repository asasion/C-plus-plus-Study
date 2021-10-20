#include<iostream>
using namespace std;
//如果想扩展计算器新的功能需要修改源码，而使用多态就不需要
//开闭原则：对扩展进行开放，对修改进行封闭
//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator//抽象类
{
public:
	virtual int getResult() = 0;//虚函数
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
	//多态使用条件
	//父类指针或者引用指向子类对象
	//加法运算
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 1;
	abc->m_Num2 = 1;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;
	//减法运算
	abc =new SubCalculator;
	abc->m_Num1 = 1;
	abc->m_Num2 = 1;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
	//乘法运算
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