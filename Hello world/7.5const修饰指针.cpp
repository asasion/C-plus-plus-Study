#include<iostream>
using namespace std;
int main75()
{
	int a = 10;
	int b;
	//cosnt修饰指针有三种情况
	//1.const修饰指针--常量指针
	const int* p=& a;//常量指针：指针的指向可以修改，但是指针指向的值不可以修改
	//整个数据都const固定了，也就是变量的值固定了
	//*p=20错，指针指向的值不可以改
	//p=&b对，指针的指向可以改
	//2.cosnt修饰常量--指针常量
	int* const p1 =& a;//指针常量：指针的指向不可以改，指针指向的值可以改
	//指针const固定了，也就是指针内的值固定了，而指针内存放的是所指向的内存空间的地址
	//p=&b错，指针的指向不可以改
	//*p=20对，指针指向的值可以改
	//3.cosnt既修饰指针，又修饰指针常量
	const int* const p2 = &a;//指针的指向和指针指向的值都不可以修改
	system("pause");
	return 0;
}