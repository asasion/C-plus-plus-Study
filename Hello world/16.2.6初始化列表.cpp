#include<iostream>
using namespace std;
//C++提供了初始化列表语法，用来初始化属性
//语法：构造函数():属性1(值1),属性2(值2)...{}
class Person1626
{
public:
	////传统初始化操作
	//Person1626(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}
	//使用初始化列表的方法初始化属性
	//Person1626() :m_A(10), m_B(20), m_C(30)
	Person1626(int a,int b,int c) : m_A(a), m_B(b), m_C(c)//使用变量来赋初值。注意冒号的位置
	{
		cout << "使用初试化列表的方式初始化属性" << endl;
	}
	int m_A;
	int m_B;
	int m_C;

};
void test162601()
{
	Person1626 p(10, 20, 30);
	//Person1626 p;
	cout << "m_A=" << p.m_A << endl;
	cout<<  "m_B=" << p.m_A << endl;
	cout<<  "m_C=" << p.m_C << endl;
}
int main1626()
{
	test162601();
	system("pause");
	return 0;
}