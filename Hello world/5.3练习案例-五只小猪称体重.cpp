#include<iostream>
using namespace std;
int main53() {
//Ҳ��������Ŀ�����
//1������5ֻС�����ص�����
	int arr[5] = { 300,350,200,400,250 };
//2�����������ҵ����ֵ
	int max=0;//���϶�һ�����ֵΪ0
	for (int i = 0; i < 5; i++) {
		if (arr[i + 1] > arr[i]) {
			max = arr[i + 1];
		}
		else {
			continue; 
		}

}
	//3����ӡ���ֵ
	cout<<"���ص�С�������Ϊ��"<<max<<endl;
	



	system ("pause");
	return 0;
}
