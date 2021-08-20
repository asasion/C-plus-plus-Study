#include<iostream>
#include<string>
using namespace std;
int main26() {
	//1、C风格的字符串
	char str1[] = "hello world1";//注意事项：1、字符串的名后要加中括号，与创建字符相区别2、等号后面要用双引号，将字符串包含进去，单引号用于单个字符
	//char str1[] = 'hello world';//单引号用于单个字符时
	cout << "hello world2" << endl;
	cout << str1 << endl;
	//2、C++风格的字符串
	string str2 = "hello world3";//string代表数据类型,需要头文件“<string>”，有时候vs会自动补充头文件。
	cout << str2 << endl;
	return 0;
}