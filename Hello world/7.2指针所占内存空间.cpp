#include<iostream>
using namespace std;
//指针也是一种数据类型，那么指针所占的内存空间是多少？
//指针保存的是一个十六进制的数
//在32位操作系统下，无论是何种类型的指针都是占4个字节的空间
//在64位操作系统下，指针占用8个字节空间
//开发环境一般都是32位的操作系统
int main72()
{
	//指针所占的内存空间大小
	int a = 10;
	int* p=&a;
	cout << "size of (int *) =" << sizeof(int*) << endl;
	cout << "size of (p)=" << sizeof(p) << endl;
	//无论何种数据类型，指针所占的内存空间都是4。
	cout << "size of (float *) =" << sizeof(float *) << endl;
	cout << "size of (double *) =" << sizeof(double *) << endl;
	cout << "size of (char *) =" << sizeof(char *) << endl;
	//在vs的debug/release旁，x86就是32位的操作系统，选择x64就是64位的操作系统。
	system("pause");
	return 0;
}