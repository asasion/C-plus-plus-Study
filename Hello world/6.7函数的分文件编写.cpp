#include<iostream>
#include"swap67.h"//双引号表示是自定义的头文件
using namespace std;
//让代码的结构更清晰
//函数分文件编写有4个步骤
/*
1.创建后缀为.h的头文件
2.创建后缀为.cpp的源文件
3.在头文件中写函数的声明
4.在源文件中写函数的定义
*/
//函数的分文件编写
//实现两个数字进行交换的函数

//void swap(int a, int b);//申明一个交换函数
//void swap(int a,int b)//定义交换函数
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
/*
1.创建后缀为.h的头文件
2.创建后缀为.cpp的源文件
3.在头文件中写函数的声明
4.在源文件中写函数的定义
*/
int main67()
{
	int a = 0;
	int b = 1;
	swap67(a,b);
	system("pause");
	return 0;
}