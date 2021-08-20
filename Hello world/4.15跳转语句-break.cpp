#include<iostream>
#include<string>
using namespace std;
int main415() {
	/*出现在switch条件语句中，作用是终止case并跳出switch
	出现在循环语句中，作用是跳出当前的循环语句
	出现在嵌套循环中，跳出最近的内层循环语句*/
	//break使用时机
	//1、出现在switch语句中
	cout << "请选择副本的难度：" << endl;
	cout << "1、普通难度" << endl;
	cout << "2、中等难度" << endl;
	cout << "3、困难难度" << endl;
	int select = 0;//创建选择结果的变量
	cin >> select;//等待用户输入
	string str;
	switch (select) {
	case 1: str = "普通"; break;
	case 2: str = "中等"; break;
	case 3: str = "困难"; break;
	}
	cout << "您选择的难度为："<<str;	
		




	//2、出现在循环语句中
	//3、出现在嵌套循环语句中


	return 0;
}