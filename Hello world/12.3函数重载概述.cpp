#include<iostream>
using namespace std;
//函数重载
//作用：函数名可以相同，提高重复性
/*
函数重载满足条件：
·同一个作用域下
·函数名称相同
·函数参数类型不同或者个数不同或者顺序不同
注意：函数的返回值不可以作为函数重载的条件
*/
//都在全局作用域下
//函数名称相同
//函数的参数类型不同或者个数不同或者顺序不同
void func122(int a)
{
	cout << "func122的调用1" << endl;
}
void func122(double a,int b)
{
	cout << "func122的调用2" << endl;
}
void func122(int b,double a)
{
	cout << "func122的调用3" << endl;
}
int main123()
{
	func122(1,3.1415);
	system("pause");
	return 0;
}
//注意事项：函数的返回值不可以作为函数重砸的条件 即void func(double a)和int func(int a) 就不可以重载