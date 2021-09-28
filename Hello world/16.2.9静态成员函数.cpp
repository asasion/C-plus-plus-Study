#include<iostream>
using namespace std;
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//所有对象共享同一个函数、静态成员函数只能访问静态成员变量
/*
静态成员分为：
·静态成员变量
	·所有对象共享一份数据
	·在编译阶段分配内存
	·类内声明，类外初始化
·静态成员函数
	·所有对象共享一个函数
	·静态成员函数只能访问静态成员变量
*/
class Person1629
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态的成员函数可以访问静态的成员变量
		//m_B = 200;//静态成员函数不可以访问非静态的成员变量
		cout << "static void func调用" << endl;
	}
	static int m_A;//静态成员变量，类内声明，类外初始化
	int m_B;//非静态的成员变量
	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2的调用" << endl;
	}
};
int Person1629::m_A = 0;//在类外对类内的静态成员变量进行初始化
//有两种的访问方式：1、通过对象调用2、通过类名访问
//因为静态函数不属于某一个对象，所有对象共享同一份数据，不需要创建对象就可以访问它
//静态函数只能访问静态的成员变量
void test1629()
{
	//1、通过对象进行访问
	Person1629 p;
	p.func();
	//2、通过类名进行访问
	Person1629::func();
	//Person1628::func2();类外访问不到私有的静态成员函数，静态成员函数也是有权限的
	//因为静态成员函数不属于某个对象，因此可以通过类名作用域访问
}
int main1629()
{
	test1629();
	system("pause");
	return 0;
}
//静态成员函数和静态成员变量是公共的，是共享的。任何对象都可以进行访问