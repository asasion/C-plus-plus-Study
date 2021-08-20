#include<iostream>
using namespace std;
int main21() {
	//整形
	//1、短整型
	short num1 = 32768;//取值范围：-32768~32767，超出此范围会循环
	//2、整形
	int num2 = 32768;
	//3、长整形
	long num3 = 10;
	//4、长长整形
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	return 0;
}  
