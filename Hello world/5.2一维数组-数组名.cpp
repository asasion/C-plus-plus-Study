#include<iostream>
using namespace std;
int main52() {
	//1. 可以统计整个数组在内存中的长度，整个数组所占用的内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//int整形占用4个字节空间
	cout << "整个数组占用的内存空间：" << sizeof(arr)<<endl;
	cout << "每个元素占用的内存空间：" << sizeof(arr[0])<<endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2. 可以获取数组在内存中的首地址
	cout << "数组在内存中的首地址："<<(int)arr << endl;//(int)将十六进制强转为十进制
	cout << "数组中第一个元素的地址：" << (int)&arr[0] << endl;//&是取址符号，数组的地址与数组元素的首地址是重合的
	cout << "数组中第二个元素的地址：" << (int)&arr[1] << endl;//第一个元素和第二个元素相差四个字节

	//数组名是一个常量，指向一个地址，不可以进行赋值操作
	//错误：arr = 100;
	system("pause");
	return 0;
}