#include<iostream>
using namespace std;
//值传递是指函数调用时实参将数值传入给形参
//值传递时，如果形参发生数值改变，不会影响到实参
//如果函数不需要返回值，声明的时函数类型可以为void型（无返回值类型）
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//返回值不需要时，可以不写return
}
int main63()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//a和b的值并不会发生改变
	system("pause");
	return 0;
}
