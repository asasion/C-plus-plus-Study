//#include<iostream>
//using namespace std;
//#include<string>
///*
//案例描述：
//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//多态的优点：
//·代码组织结构清晰
//·可读性强
//·利于前期和后期的扩展以及维护
//*/
////分别利用普通写法和多态技术实现计算器
//
////普通写法
//class Calculator1372
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//		int m_Num1=0;//操作数1
//		int m_Num2=0;//操作数2
//	};
//void test137201()
//{
//	Calculator1372 c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//		//如果想扩展新的功能，就需要修改源码，例如现在想扩展一个除法的计算
//		//在真实的开发中，提倡 开闭原则
//		//开闭原则：对扩展进行开放，对修改进行关闭
//		//以上传统计算器的结构非常不利于后期维护和扩展
//		
//		
//		//利用多态来写计算器
//		//多态带来的好处：1、组织结构清晰2、可读性强3、对于前期和后期扩展以及维护性高
//		//实现计算器的抽象类，里面什么都不写，只是把getResult函数给抽象出来
//		class AbstractCalculator//加法计算器的父类
//		{
//		public:
//			virtual int getResult()//写成虚函数
//			{
//				return 0;//起初还未设计完全时，先return 0
//			}
//			int m_Num1=0;
//			int m_Num2=0;
//		};
//		//加法计算器类
//		class AddCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 + m_Num2;
//			}
//		};
//		//减法计算器类
//		class SubCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 - m_Num2;
//			}
//		};
//		//乘法计算器类
//		class TimesCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 * m_Num2;
//			}
//		};
//
//void test137202()
//{
//	//多态的使用条件
//	//父类的指针或引用指向子类对象
//	//实现加法运算
//	AbstractCalculator * abc = new AddCalculator;//由父类指针指向子类对象
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//用完后记得销毁
//	delete abc;
//	//实现减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 9;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	//实现乘法运算
//	abc = new TimesCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 9;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//int main1372()
//{
//	//test137201();
//	test137202();
//	system("pause");
//	return 0;
//}
//总结：C++开发提倡利用多态设计程序架构，因为多态的优点很多
