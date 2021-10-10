#include<iostream>
using namespace std;
/*
·函数调用运算符()也可以重载
·由于重载后使用的方式非常像函数的调用，因此称为仿函数
·仿函数没有固定写法，非常灵活
*/
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}
void test135601()
{
	MyPrint myPrint;
	myPrint("Hello World");//由于使用起来风场类似于函数调用，因此称为仿函数
	MyPrint02("Hello World");
}
//仿函数非常灵活，没有一个固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test135602()
{
	MyAdd myadd;
	int result=myadd(100, 100);
	cout << result << endl;
	//匿名函数对象
	cout <<MyAdd()(100, 100) << endl;//MyAdd是一个匿名函数对象，后面的第二个括号使用的是小括号的重载。特点：当前行执行完成后，立即被释放。一个类型加一个小括号，第一反应是一个匿名对象
}
int main()
{
	//test135601();
	test135602();
	system("pause");
	return 0;
}