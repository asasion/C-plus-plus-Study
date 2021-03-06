#include<iostream>
using namespace std;
/*
问题：当子类与父类出现同名成员，如何通过子类对象，访问到子类或父类中同名的数据？
·访问子类同名成员 直接访问即可
·访问父类同名成员 需要加作用域
*/
//继承中同名成员的处理方式
class Base1365
{
public:
	Base1365()
	{
		m_A = 100;
	}
	void func1365()
	{
		cout << "Base1365 - func1365()的函数调用" << endl;
	}
	void func1365(int a)//函数重载
	{
		cout << "Base1365 - func1365(int a)的函数调用" << endl;
	}
	int m_A;//父类中同名的成员m_A

};
class Son1365 :public Base1365
{
public:
	Son1365()
	{
		m_A = 200;
	}
	void func1365()
	{
		cout << "Son1365 - func1365()函数调用" << endl;
	}
	int m_A;//子类中同名的成员m_A
};
//同名成员属性的处理方式
void test136501()
{
	Son1365 s;
	cout << "Son中的m_A=" <<s.m_A << endl;//输出结果：“Son中的m_A=200”，输出的是子类中的m_A成员，而不是从父类继承下来的m_A
	//如果通过子类对象 访问到父类中同名的成员，需要加一个作用域
	cout << "Son中继承的Base的m_A=" << s.Base1365::m_A << endl;//输出结果：“Son中继承的Base的m_A=100”
}
//同名成员函数的处理方式
void test136502()
{
	Son1365 s;
	s.func1365(); //结果：Son1365 - func1365()函数调用，直接调用调用的是子类中的同名成员函数
	//如何调用到父类中同名的成员函数？
	s.Base1365::func1365();//结果：Base1365 - func1365()函数调用
	s.Base1365::func1365(1);//父类中重载函数的调用 结果：Base1365 - func1365(int a)的函数调用
}
int main1365()
{
	//test136501();
	test136502();
	system("pause");
	return 0;
}
//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数，
//所以要加上父类的作用域才可以访问父类中同名的成员函数
/*
总结：
1、子类对象可以直接访问到子类中同名成员
2、子类对象加作用域可以访问到父类同名成员
3、当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
*/