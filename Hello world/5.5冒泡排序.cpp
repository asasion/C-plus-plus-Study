#include<iostream>
using namespace std;
int main55() {
	//将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序
	//1、比较相邻的元素，如果第一个比第二个大，就交换它们两个
	//2、对每一对相邻元素做同样的工作，执行完毕后，找到第二个最大值
	//3、重复以上步骤，每次比较次数-1，直到不需要比较
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int temp;
	cout << "排序前的数组为：";
	
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		cout << arr[j] << "\t";
	}
		//总共排序轮数为：元素个数-1
		for (int k = 0; k <9-1;k++){//sizeof(arr)/ sizeof(arr[0])-1; k++) {
			for (int i = 0; i < 9-1-k;i++){//(sizeof(arr)/ sizeof(arr[0]) - k )-1; i++) {//内层循环对比 次数=元素个数-当前轮数-1
				if (arr[i] > arr[i + 1]) {
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
			}
		}
	cout << endl;
	//排序后的结果
		cout << "排序后的数组为：";
		for (int j = 0; j <sizeof(arr)/ sizeof(arr[0]); j++) {
			cout << arr[j] << "\t";
			
}

	system("pause");
	return 0;
}