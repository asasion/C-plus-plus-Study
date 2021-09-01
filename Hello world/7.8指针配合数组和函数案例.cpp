#include<iostream>
using namespace std;
//案例描述：封装一个函数，利用冒泡排序，实现对整形数组的升序排序
//冒泡排序函数 形参1 数组的首地址 形参2 数组的长度
void bubbleSort78(int *arr,int len)//为什么是*arr而不直接是arr，因为数组无法被拷贝，就不能使用值传递的方式使用数组参数，数组会被转换为指针，另外也可以使用arr[]表示这是一个地址
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i-1; j++) 
		{
			if (arr[j] > arr[j+1])
			{
				//如果j>j+1的值就交换两个数字
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

		}
	}
}
void print78(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		cout << arr[i]<<"\n";
	}
}
int main78()
{
//1、创建一个数组
	int arr[10] = { 5,6,9,8,7,4,1,2,3,10 };
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);//计算数组长度
//2、创建一个函数，实现冒泡排序
	bubbleSort(arr, len);
//3、打印排序后的数组
	print78(arr, len);
	system("pause");
	return 0;
}