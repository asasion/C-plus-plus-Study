#include<iostream>
using namespace std;
/*
C++允许一个类继承多个类
语法：class 子类:继承方式 父类,继承方式 父类2 ...
多继承可能会引发父类中有同名成员出现，需要加作用域区分
C++实际开发中不建议使用多继承
*/
class Base136701
{
public:
	Base136701()
	{
		m_A = 100;
	}
	int m_A;
};
class Base136702
{
public:
	Base136702()
	{
		m_B = 200;
		m_A = 500;
	}
	int m_B;
	int m_A;
};
//子类 需要继承Base136701和Base136702
//语法：class 子类 ：继承方式 父类1，继承方式 父类2...
class Son1367 :public Base136701, public Base136702
{
public:
	Son1367()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test136701()
{
	Son1367 s;
	cout << "Size of Son =" << sizeof(Son1367) << endl;//运行结果：Size of Son=16
	cout << "Base136701::m_A =" << s.Base136701::m_A << endl;//此时如果多继承的两个父类中有一同名成员，在多继承的情况下就会出现二义性，访问对象不明确，需要加作用域来区分
	cout << "Base136702::m_A =" << s.Base136702::m_A << endl;
}
int main()
{
	test136701();
	system("pause");
	return 0;
}
/*
不建议用多继承的方式编写代码，防止团队开发时命名重复，发生冲突
*/