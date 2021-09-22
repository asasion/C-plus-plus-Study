#include<iostream>
using namespace std;
//函数的默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的
//语法函数：返回值类型 函数名 (参数 = 默认值){}
int func(int a, int b=20, int c=30)//b，c可以有默认值
{
	return a + b + c;
}
//1、注意事项:如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
//int func2(int a, int b=10,int c)
//{
//	return a + b + c;
//}
//2、如果函数的声明有了默认参数，那么这个函数的实现就不能有默认参数
//声明和实现只能有一个默认的参数
int func2(int a=10,int b=10);//不是创建函数，而是一个函数的声明(如果一个函数暂时还没有创建，可以先声明，让编译器知道有这个函数，再在后面创建这个函数)
int func2(int a, int b)//声明与创建的函数中的默认值不同，出现二义性，编译器报错
{
	return a + b;
}
int main121()
{
	cout<<func(10,30)<<endl;
	cout << func2() << endl;
	system("pause");
	return 0;
}