#include<iostream>
using namespace std;
int main54() {
	/*请声明一个5个元素的数组，并且将元素逆置
	(如原数组元素为：1, 3, 2, 5, 4; 逆置后输出结果为:4, 5, 2, 3, 1);*/
	int arr[5] = { 1,3,2,5,4 };
	cout << "置换前的数组元素依次为：";
	for (int j = 0; j < 5; j++) {
		cout << arr[j]<<"\t";
	}
	cout << endl;
	int start = 0;//记录元素下标的起始位置
	int end = sizeof(arr) / sizeof(arr[0])-1;//记录元素下标的末尾位置,要减1，因为是从0开始
	int temp = 0;//中间变量
	do  {//元素互换
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;//下标更新
		end--;
		continue;
	} while (start < end);
	cout << "置换后的数组元素依次为：";
	for (int i = 0; i < 5; i++) {
		cout << arr[i]<<"\t";
	}

	system("pause");
	return 0;
}