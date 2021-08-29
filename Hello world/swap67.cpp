//第四步:在源文件中写函数的定义
#include"swap67.h"//双引号表示是自定义的头文件
void swap67(int a, int b)//定义交换函数
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}