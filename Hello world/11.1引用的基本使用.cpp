#include<iostream>
using namespace std;
//作用：给变量起别名
//语法：数据类型 &别名=原名，原名与别名的数据类型要一致。
int main111()
{
	//引用的基本语法
	int a = 10;
	int& b = a;
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}