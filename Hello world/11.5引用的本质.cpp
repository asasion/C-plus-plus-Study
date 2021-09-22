#include<iostream>
using namespace std;
//本质：引用的本质是在C++内部的一个指针常量（int  * const p=&a 等同于 int &p=a）
//（指针常量：指针的指向不能修改，指针指向的值可以修改  int  * const p=&a;）
void func115(int& ref)
{
	ref = 100;
}
int main115()
{ 
	int a = 10;
	int& ret = a;//这一句自动转换为 int* const ref =&a;指针常量是指针指向不可改，
				 //同时也说明了为什么引用对象不可更改
	ret = 20;//内部发现ref是引用，自动转换为：* ref=20;

	cout << "a=" << a << endl;
	cout << "ret=" << ret << endl;
	func115(a);
	cout << "a=" << a << endl;
	cout << "ret=" << ret << endl;
	system("pause");
	return 0;
} 