#include<iostream>
using namespace std;
int main22() {
	//用sizeof求出四种整形所占的内存空间大小
	//整形（内存空间大小）：short （2）	int （4） long（4） long long（8）
	//语法：sizeof（数据类型/变量）
	short num1 = 10;
	cout << "short占用的内存空间为：" << sizeof(short) << endl;
	cout << "num1占用的内存空间为：" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int占用的内存空间为：" << sizeof(int) << endl;
	cout << "num2占用的内存空间为：" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long占用的内存空间为：" << sizeof(long) << endl;
	cout << "num3占用的内存空间为：" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long占用的内存空间为：" << sizeof(long long) << endl;
	cout << "num4占用的内存空间为：" << sizeof(num4) << endl;
	return 0;
}
//整形大小比较
//short<int<=long<=long long