#include<iostream>
using namespace std;
int main31() {
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//int声明是整形，只取整数位，不取余数，不是四舍五入

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	//int a3 = 10;
	//int b3 = 0;
	//cout << a3 / b3 << endl;//0不可以作为分母；无意义，极限里也只是趋向于无穷，但实际是无意义

	//两个小数相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;//运算的结果也可以是小数


	return 0;
}