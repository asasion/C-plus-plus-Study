#include<iostream>
using namespace std;
//C++中函数的形参列表中可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法:返回值类型 函数名 (数据类型){}（括号里只写一个数据类型）
//在现阶段的占位参数存在意义不大，但是后面的课程中会用到该技术
//占位参数
//返回值类型 函数名 (数据类型){}
//占位参数可以有默认参数
void func122(int a,int =10)//第二个int就是占位的，但是目前取不到占位参数，后面的课程中会用到
{
	cout << "This is func." << endl;
}
int main122()
{
	func122(10);
	system("pause");
	return 0;
}