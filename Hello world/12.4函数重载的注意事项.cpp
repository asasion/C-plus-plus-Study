#include<iostream>
using namespace std;
//引用作为重载条件
/*
函数重载的三个条件：
1、同一作用域下
2、函数名相同
3、函数的参数类型不同或参数个数不同或参数顺序不同
*/
//const int &和 int &属于类型不同
void func1241(int &a)//形参接收实参时，是int &a=10;是一个错误的语句，10不是一个合法的地址
{
	cout << "func1241(int &a)调用" << endl;
}
void func1241(const int & a)//形参接收实参时，是const int &a=10;相当于创建一个临时的数据，让a指向这个临时的数据空间。详见常量引用
{
	cout << "func1241(const int & a)调用" << endl;
}
//2、函数重载碰到函数默认参数
void func1242(int a ,int b=10)//b有默认值，函数重载发生二义性
{
	cout << "func1242(int a,int b=10的调用" << endl;
}
void func1242(int a)
{
	cout << "func1242(int a)的调用" << endl;
}
int main124()
{
	int a = 10;
	func1241(a);//运行结果：调用是不加const的函数，原因：a是一个变量，可读可写而不是一个常量。而const是只读。
	func1241(10);//运行结果：调用是加const的函数
	//func1242(10);//函数重载发生二义性,尽量避免这种情况，在函数重载时不要写默认值。
	system("pause");
	return 0;
}