#include<iostream>
using namespace std;
//指针变量指向非法的内存空间
int main74()
{
	//野指针
	//在程序中，尽量避免出现野指针
	//空指针和野指针都不是我们申请的空间，因此不要访问
	int* p = (int *)0x1100;//p指向该内存空间
	cout << *p << endl;

	system("pause");
	return 0;
}