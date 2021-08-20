#include<iostream>
using namespace std;
int main53() {
//也可以用三目运算符
//1、创建5只小猪体重的数组
	int arr[5] = { 300,350,200,400,250 };
//2、从数组中找到最大值
	int max=0;//先认定一个最大值为0
	for (int i = 0; i < 5; i++) {
		if (arr[i + 1] > arr[i]) {
			max = arr[i + 1];
		}
		else {
			continue; 
		}

}
	//3、打印最大值
	cout<<"最重的小猪的体重为："<<max<<endl;
	



	system ("pause");
	return 0;
}
