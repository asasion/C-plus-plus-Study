#include<iostream>
using namespace std;
int main57() {
	//二维数组的名称用途
	//1、查看二维数组所占内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组arr占用的内存空间为：" << sizeof(arr) << endl;
	//结果为24，一个整形占用4个字节，arr数组中一共6个整形，4*6=24个字节
	double arr1[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组arr占用的内存空间为：" << sizeof(arr1) << endl;
	//结果为48，一个双精度实型占用8个字节，6*8=48个字节
	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
	//结果为12
	cout << "二维数组第一个元素占用的内存为：" << sizeof(arr[0][0]) << endl;
	//结果为4
	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//结果为2
	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//结果为3
	//2、获取二维数组首地址
	cout << "二维数组的首地址为：" << arr << endl << "二维数组的首地址(十进制)为：" << (int)arr << endl;
	//结果为二维数组的首地址为：004DF9AC
	//二维数组的首地址(十进制)为：5110188
	cout << "二维数组中第一行的首地址：" << (int)arr[0] << endl;
	//与数组的首地址值一样
	cout << "二维数组中第二行的首地址：" << (int)arr[1] << endl;
	//结果与第一行首地址相差12
	cout << "二维数组第一个元素的首地址：" << (int)&arr[0][0] << endl;//&代表取址符
	//结果与数组首地址、第一行数据首地址一致
	cout << "二位数组第二个元素的首地址：" << (int)&arr[0][1] << endl;
	//结果比第一个元素首地址大4
	system("pause");
	return 0;
}