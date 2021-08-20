#include<iostream>
using namespace std;
int main46() {
	//三目运算符
	//创建三个变量 a b c
	//将a和b做比较，将变量大的值付给变量c
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);//表达式1?表达式2：表达式3
	//a>b返回a，a<b返回b，最后赋值给c
	cout << "c=" << c << endl;
	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;//返回的是b，并且给b赋值100
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;





	return 0;
}