#include<iostream>
using namespace std;
/*
C++中拷贝构造函数调用时机通常有三种情况
·使用一个已经创建完毕的对象来初始化一个新对象
·值传递的方式给函数参数传值
·以值的方式返回局部对象
*/
class Person1323
{
public:
	Person1323()//构造函数
	{
		cout << "Person1323的默认构造函数调用。" << endl;
	}
	Person1323(int age)//有参构造初始化年龄
	{
		cout << "Person1323的有参构造函数调用。" << endl;
		m_Age = age;
	}
	Person1323(const Person1323 &p)//拷贝构造函数
	{
		cout << "Person1323的拷贝构造函数调用。" << endl;
		m_Age = p.m_Age;
	}
	~Person1323()//析构函数
	{
		cout << "Person1323的默认析构函数调用。" << endl;
}
	int m_Age=0;
};
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test132301()
{
	//使用括号法进行调用
	Person1323 p1(20);
	Person1323 p2(p1);//调用拷贝构造函数
	cout << "p2的年龄为：" << p2.m_Age << endl;
	/*
	打印结果
	Person1323的有参构造函数调用。
	Person1323的拷贝构造函数调用。
	p2的年龄为：20
	Person1323的默认析构函数调用。
	Person1323的默认析构函数调用。
	*/
}
//2、值传递的方式给函数参数传值
void doWork132302(Person1323 p)//给一个函数的参数进行传值
{
	
}
void test132302()
{
	Person1323 p;//调用默认参数函数
	doWork132302(p);//创建了一个副本，调用了拷贝构造函数，当修改原本的参数时，拷贝的部分不会发生改变，是值传递的方式
	/*
	打印结果:调用了拷贝构造函数
	Person1323的默认构造函数调用。
	Person1323的拷贝构造函数调用。
	Person1323的默认析构函数调用。
	Person1323的默认析构函数调用。
	*/
}
//3、以值的方式返回局部对象
Person1323 doWork132303()
{
	Person1323 p1;
	cout << (int*)&p1 << endl;
	return p1;
	//局部对象在函数执行完成之后就会被立即释放，但此时返回的并不是p1本身，因为是用的值的方式返回给test03的
}
void test132303()
{
	Person1323 p = doWork132303();
	cout << (int*)&p << endl;
	/*
	运行结果：调用了拷贝构造函数
	Person1323的默认构造函数调用。
	000000EE6755F704
	Person1323的拷贝构造函数调用。
	Person1323的默认析构函数调用。
	000000EE6755F844
	Person1323的默认析构函数调用。
	*/
}
int main1323()
{
	//test132301();
	//test132302();
	test132303();
	system("pause");
	return 0;
}
//总结：拷贝构造函数的三种调用时机