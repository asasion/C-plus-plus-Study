#include<iostream>
#include<string>
using namespace std;
int main28() {
	//1、整形输入
	//int a = 0;
	//cout << "请给整型变量a赋值" ;
	//cin >> a; //>> endl;//这一部分不是输出，所以报错
	//cout <<"整形变量a的值为"<<a <<endl;
	//2、实型（浮点型)
	//float f = 3.14f;
	//cout << "请给浮点型变量f赋值";
	//cin >> f;
	//cout << "浮点型变量f的值为：" << f << endl;
	//3、字符串类型
	//char ch = 'a';
	//cout << "请给字符型变量ch赋值：";
	//cin >> ch;
	//cout << "字符型变量ch的值为:" << ch << endl;
	
	//4、字符串类型//需要包含<string>头文件
	//string str = "hello";
	//cout << "请给字符串str赋值：";
	//cin >> str;
	//cout << "字符串类型变量str的值为：" << str << endl;
	//5、布尔类型//布尔类型会自动省略小数点后的数字；例如：0.999是0；而且输入ture也为0
	bool flag = false;
	cout << "请给布尔类型变量flag赋值：";
	cin >> flag;
	cout << "布尔类型变量flag的值为：" << flag << endl;

	return 0;
}