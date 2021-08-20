#include<iostream>
using namespace std;
int main38() {

	int a = 10;
	int b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;
	//同假为假，其余为真
	return 0;
}