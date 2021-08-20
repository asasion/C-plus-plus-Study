#include<iostream>
using namespace std;
int main24() {
	//1、字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;
	//2、字符型变量所占的内存大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;
	//3、字符型变量常见错误
	//char ch2 = "b";//不可以用双引号创建字符型变量，只可以用单引号
	//char ch2 = 'abcdef';//创建字符型变量时，单引号内只能包含一个字符
	//cout << ch2 << endl;
	//4、字符型变量对应ASCII编码
	cout << (int)ch << endl;//(int)可以用于将字符型强制转换成整形，97就是a所对应的ASCII码
	//需要记住的ACSII码值
	//a -- 97
	//A -- 65 
	return 0;
}