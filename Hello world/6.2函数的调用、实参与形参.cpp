#include<iostream>
using namespace std;
//定义一个函数
int add(int num1, int num2)//数据类型 函数名称(形参列表)
{
	int sum = num1 + num2;
	return sum;
}

int main62()
{
	//main函数中调用add函数
	int a = 10;
	int b = 20;
	//函数调用语法：函数名称（参数）
	//a和b称为 实际参数，简称实参
	//函数定义的时候，num1和num2并没有具体的数据，只是一个形式参数，简称形参
	//当调用函数时，实参的值会传递给形参
	cout << add(a, b) << endl;
	system("pause");
	return 0;
}