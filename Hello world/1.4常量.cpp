#include<iostream>
using namespace std;
//常量的定义方式有两种
//1、#define 宏常量
//2、const修饰的变量 常变量
#define Day 7//1、#define 宏常量通常在main函数之前定义，不用加分号。
int main14() {
	//Day = 14;//错误，Day是一个常量，一旦修改就会报错
	const int month = 12;//const修饰变量
	//month = 24;//错误修饰的变量也称为常变量，不可修改。

	cout << "一周总共有：" << Day << "天" << endl;
	cout << "一年总共有：" << month << "个月" << endl;



	return 0;
}
