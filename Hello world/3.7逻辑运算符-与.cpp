#include<iostream>
using namespace std;
int main37() {
	//逻辑运算符 - 与 &&
	int a = 10;
	int b = 10;
	cout << (a && b)<< endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//同真为真，其余为假 
	return 0;
}