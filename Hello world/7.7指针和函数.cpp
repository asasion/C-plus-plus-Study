#include<iostream>
using namespace std;
//指针和函数
//实现两个数字交换的函数
void swap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01_a=" << a << endl;//形参发生改变
	cout << "swap02_b=" << b << endl;
}
void swap02(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main77()
{
	//1、值传递，形参改变不了实参，实参输入到形参，形参是函数中的变量，实参是调用函数时输入到形参的变量
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;//实参没有发生改变
	cout << "b=" << b << endl;
	//2、地址传递
	//如果是地址传递，可以修饰实参
	swap02(&a, &b);//传入a和b的地址
	cout << "a=" << a << endl;//实参也会发生改变，因为指针指向实参，交换指针内存放的地址位置，实参也就交换了内存空间
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}