#include<iostream>
using namespace std;
/*
引用的注意事项：
1、引用必须初始化
int &b;是错误的
2、引用在初始化后，不可以改变
*/

int main112()
{
	int a = 10;
//1、引用必须初始化
	//int& b;//错误
//2、引用在初试化后就不可以再改变
	int c = 20;
	int& b = a;
	b = c;//是赋值操作而不是更改引用
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}