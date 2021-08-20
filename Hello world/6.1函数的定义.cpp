#include<iostream>
using namespace std;
//注意不要把add函数写在main函数当中
//定义的函数要写在main函数之前，不然会报错：找不到标识符
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main61() 
{
	cout << add1(1, 2) << endl;
	system("pause");//system函数中的按任意键继续功能
	return 0;
}

//定义一个加法函数，实现两个数相加
//实现一个加法函数，传入两个整形数据。计算数据相加的结果，并且返回
	//1、返回值类型							int
	//2、函数名称							add
	//3、参数列表（传入函数中的参数）		(int num1,int num2)
	//4、函数体语句（函数中的具体内容）		int sum = num1+num2;
	//5、return表达式，返回函数结果			return sum;
	//函数语法
	/*
	返回值类型 函数名 参数列表
	{
		函数体语句
		返回值
	}
	*/