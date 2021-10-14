#include<iostream>
using namespace std;
/*
子类继承父类后，当创建子类对象，也会调用父类的构造函数
问题：父类和子类的构造和析构顺序是谁先谁后？
当创建一个子类对象是先有的子类对象还是先有的父类对象
*/
//继承中构造和析构顺序
class Base1364
{
public:
	Base1364()
	{
		cout << "Base1364的构造函数！" << endl;
	}
	~Base1364()
	{
		cout << "Base1364的析构函数！" << endl;
	}
};
class Son1364 :public Base1364
{
public:
	Son1364()
	{
		cout << "Son1364的构造函数！" << endl;
	}
	~Son1364()
	{
		cout << "Son1364的析构函数！" << endl;
	}
};
void test136401()
{
	//Base1364 b;
	/*
	运行结果：Base1364的构造函数！Base1364的析构函数！
	*/
	Son1364 s;
	/*
	运行结果：
	Base的构造函数！
	Son的构造函数！
	Son的析构函数！
	Base的析构函数！
	*/
}
int main1364()
{
	test136401();
	
	system("pause");
	return 0;
}
/*
继承中的构造和析构顺序如下
先构造父类，再构造子类，析构的顺序与构造的顺序相反
*/
//先有的Base构造再有的Son构造，先析构Son再析构的Base