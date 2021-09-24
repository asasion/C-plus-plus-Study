#include<iostream>
using namespace std;
/*
构造函数分类的两种方式：
按参数分为：有参构造和无参构造（默认构造函数，因为如果不写构造函数，编译器也会提供一个构造函数提供的是无参构造函数）
按类型分为：普通构造和拷贝构造
三种调用方式：
括号法、显示法、隐式转换法
*/
class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)//拷贝一份构造函数，拷贝构造函数的写法
	{

	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};
void test132201()
{

}
int main()
{

	system("pause");
	return 0;
}