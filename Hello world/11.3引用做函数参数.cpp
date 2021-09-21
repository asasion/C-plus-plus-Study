#include<iostream>
using namespace std;
//作用：函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参
//1、值传递
//交换函数
void mySwap01(int a, int b)
{
	int temp = a;
	a=b;
	b = temp;
	cout << "mySwap_01 a=" << a << endl;
	cout << "mySwap_01 b=" << b << endl;
	}
//2、地址传递
void mySwap02(int* a, int* b)//用指针去接收地址
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "mySwap_02 a=" << *a << endl;
	cout << "mySwap_02 b=" << *b << endl;
}
//3、引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap_03 a=" << a << endl;
	cout << "mySwap_03 b=" << b << endl;
}
int main113()
{
	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//结果：a,b的值不发生改变，形参交换无法修饰实参交换
	//mySwap02(&a,&b);
	mySwap03(a, b);//引用传递和地址传递都可以形参修饰实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	system("pause");
	return 0;
}
//总结：通过引用参数产生的效果同按地址传递是一样的。引用的语法更加清楚简单。