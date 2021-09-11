#include<iostream>
#include<string>
using namespace std;
//作用：将结构体作为参数向函数中传递
//传递方式有两种：
//*1、值传递->形参不会改变实参
//*2、地址传递->如果实参发生改变，形参也会发生改变
//结构体做函数的参数
//将学生传入到一个参数中，打印学生的属性
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
int main()
{
	//结构体作函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息
	//创建结构体变量
	system("pause");
	return 0;
}