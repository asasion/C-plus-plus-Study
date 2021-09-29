#include<iostream>
using namespace std;
/*
·静态成员变量
	·所有对象共享一份数据
	·在编译阶段分配内存//分配到内存的全局区内
	·类内声明，类外初始化（必须，且必须要有一个初始值）
*/
class Person1628
{
public:
	//1、所有对象都共享同一份数据
	//2、在编译阶段就分配内存
	//3、类内声明，类外初始化操作（必须的操作）
	static int m_A;
	//不赋初值，直接输出静态函数，会报错，无法解析的外部符号，与分文件编写的报错十分类似，
	//无法访问的外部命令是在链接阶段发生的问题
	//静态成员变量也是有访问权限的
private:
	static int m_B;
};
int Person1628::m_A = 100;//需要申明是Person1628类下的成员
int Person1628::m_B = 200;//静态变量需要类内声明，类外进行初始化
void test162801()
{
	Person1628 p1;
	cout << p1.m_A << endl;
	Person1628 p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;//用p2对象访问m_A，再用p1对象访问m_A发现是可行的。运行结果是200，证明是静态变量m_A是所有对象共享的。
}
void test162802()
{
	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种的访问方式
	//1、通过对象进行访问
	Person1628 p;
	cout << p.m_A << endl;
	//2、通过类名进行访问
	cout << Person1628::m_A << endl;//通过类名作用域访问静态变量
	//cout << Person1628::m_B << endl;//因为m_B的权限为私有，所以无法在类外访问得到
}
int main1328()
{
	test162801();
	test162802();
	system("pause");
	return 0;
}