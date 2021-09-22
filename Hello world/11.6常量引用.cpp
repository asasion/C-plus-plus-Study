#include<iostream>
using namespace std;
//常量引用
//作用：常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
void showValue116(const int &val)//用const修饰形参，使其不可以被修改,修改就会报错
{
	//val = 1000;//形参在函数体内部被修改
	cout << "val=" << val << endl;
}
int main116()
{
	//int a = 10;
	//加上const之后，编译器将修改代码 int temp = 10;const int &ref =temp;
	//（创建了一个临时变量，引用引向temp）
	//const int& ref = a;//引用必须是一块合法的内存空间
	//ref = 20;//此时就无法修改，限定为只读状态
	int a = 100;
	showValue116(a);
	cout << "a=" << a << endl;//输出结果为1000，实参也被修改为1000
	system("pause");
	return 0;
 }
//总结：
//引用本身需要一个合法的内存空间，因此 int &ref=10;是错误的 但是加上const变为const int& ref =10;就可以通过。