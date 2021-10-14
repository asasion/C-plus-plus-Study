#include<iostream>
using namespace std;
//继承中的同名静态成员处理方式
/*
问题：继承中同名的静态成员在子类对象上如何进行访问？
静态成员和非静态成员出现同名，处理方式一致
·访问子类同名成员	直接访问即可
·访问父类同名成员	需要加作用域
*/
class Base1366
{
public:
	static int m_A;//静态成员 类内声明，类外初始化
	static void func1366()
	{
		cout << "Base1366 - static void func1366()" << endl;
	}
	static void func1366(int a)
	{
		cout << "Base1366 - static void func1366(int a)" << endl;
	}
};
int Base1366::m_A=100;//静态成员的类外初始化
class Son1366 :public Base1366 
{
public:
	static int m_A;
	static void func1366()
	{
		cout << "Son1366 - static void func1366()" << endl;
	}
};
int Son1366::m_A = 200;
//同名静态成员属性
void test136601()
{
	//1、通过对象来访问数据
	cout << "通过对象来访问数据" << endl;
	Son1366 s;
	cout << "Son下的静态成员属性m_A=" << s.m_A<<endl;//运行结果：Son下的静态成员属性m_A=200。
	cout << "Base下的静态成员属性m_A=" << s.Base1366::m_A << endl;//运行结果：Base下的静态成员属性m_A=100。
	//2、通过类名访问数据
	cout << "通过类名访问数据" << endl;
	cout << "Son1366下m_A=" << Son1366::m_A << endl;
	cout << "直接访问Base1366的m_A" << Base1366::m_A << endl;
	cout << "Son1366继承的Base1366的m_A=" << Son1366::Base1366::m_A << endl;//通过子类继承的父类的作用域访问父类中的m_A
	//Son1366::Base1366::m_A ，两个“::”所代表的含义是不同的，第一个“::”指通过类名的方式访问父类作用域的数据，第二个“::”表示是访问父类的作用域下的数据
}
//同名静态成员函数
void test136602()
{
	//1、通过对象访问
	cout << "通过对象访问" << endl;
	Son1366 s;
	s.func1366();//运行结果：“Son1366 - static void func1366()”
	s.Base1366::func1366();//运行结果：“Base1366 - static void func1366()”
	//2、通过类名访问
	cout << "通过类名访问" << endl;
	Son1366::func1366();
	Base1366::func1366();
	Son1366::Base1366::func1366();
	//调用父类作用域下的重载静态函数
	//子类出现一个和父类同名的静态成员函数，也会隐藏掉父类中所有同名成员函数
	// 如果想访问父类中被隐藏同名成员，需要加作用域
	//Son::func(100);//无法通过子类直接调用父类中的重载函数，因为已经被子类隐藏掉了，只能通过父类作用域进行调用
	Base1366::func1366(100);
}
int main()
{
	//test136601();
	test136602();
	system("pause");
	return 0;
}
//总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象和通过类名）