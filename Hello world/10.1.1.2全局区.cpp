#include<iostream>
using namespace std;
//全局变量、静态变量、字符串常量、const修饰的全局变量（全局常量）都放在全局区
//局部变量、const修饰的局部变量(局部常量)不放在全局区
//c-const常量 g-global全局 l-lock局部
//全局变量
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;//const修饰的全局变量，即全局常量
const int c_g_b = 10;
int main10112()
{
	//全局区
	//全局区存放：全局变量、静态变量、常量
	//在全局区和不在全局区内的变量有什么区别？
	//创建一个普通的局部变量a、b,在函数体内的变量都叫局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址：" << (int)&a << endl;//int将十六进制强转为十进制
	cout << "局部变量b的地址：" << (int)&b << endl;
	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;
	//静态变量，在普通变量前加static修饰，就属于静态变量，静态变量也会放在全局区中
	static int s_a = 10;
	static int s_b= 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;
	//常量 分为字符串常量和const修饰变量
	//字符串常量 被双引号引起来的就是字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
	//const修饰变量
	//const修饰的全局变量
	cout << "全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为：" << (int)&c_g_b << endl;
	//const修饰的局部变量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}