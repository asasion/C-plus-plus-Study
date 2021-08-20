#include<iostream>
using namespace std;
int main27() {
	//1、创建bool数据类型
	bool flag = true;//true，1代表真,flase,0代表假
	cout << flag << endl;//
	flag = false;
	cout << flag << endl;
	//2、查看bool类型所占内存空间
	cout << "布尔类型所占的内存空间为：" << sizeof(flag) << endl;

	return 0;
}