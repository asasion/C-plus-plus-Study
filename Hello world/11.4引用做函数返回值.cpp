#include<iostream>
using namespace std;
//作用：引用是可以作为函数的返回值存在的
//注意：不要返回局部变量引用
//用法：函数调用作为左值
//引用做函数的返回值
//1、不要返回局部变量的引用
int& test11401()//用引用的方式返回
{
	int a = 10;//存放在四区中的栈区，因为它是函数中的局部变量，函数运行结束后自动释放，所以是在栈区
	return a;
	}
//2、函数的调用可以作为左值
int& test11402()
{
	static int a = 10;//静态变量存放在全局区，全局区的数据由系统在程序执行完后自动释放
	return a;
}
int main114()
{
	//int& ref = test11401();//ref指代函数中的a。
	int& ref = test11402();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	test11402() = 1000;//当函数有返回值时，函数的调用可以作为左值，相当于a=1000的操作，就是对a进行操作
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;//打印出的是乱码，因为函数中a的内存已经被释放。
	system("pause");
	return 0;
}