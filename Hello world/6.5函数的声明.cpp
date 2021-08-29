#include<iostream>
using namespace std;
//作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。（提前告诉编译器函数的存在）
//函数的声明可以多次，但是函数的定义只能有一次。
//比较函数，实现两个整形数字进行比较，返回较大的值
int max(int a, int b);//函数的声明，告诉主函数函数的存在
int main()//目前主函数应该在其余函数的后面，因为代码是按顺序编译执行的，主函数中存在未定义的函数就会报错
			//解决方法：利用函数声明提前告诉主函数，未定义的函数的存在
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
int max(int a, int b)//函数的定义
{
	return a > b ? a : b;//三目运算符，如果a>b，那就返回a，否则就返回b。
}
