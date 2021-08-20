#include<iostream>
using namespace std;
//作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。（提前告诉编译器函数的存在）
//函数的声明可以多次，但是函数的定义只能有一次。
//比较函数，实现两个整形数字进行比较，返回较大的值
int max(int a, int b)
{
	return a > b ? a : b;//三目运算符，如果a>b，那就返回a，否则就返回b。
}
int main()
{
	int
	system("pause");
	return 0;
}