#include<iostream>
using namespace std;
int main54() {
	/*������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
	(��ԭ����Ԫ��Ϊ��1, 3, 2, 5, 4; ���ú�������Ϊ:4, 5, 2, 3, 1);*/
	int arr[5] = { 1,3,2,5,4 };
	cout << "�û�ǰ������Ԫ������Ϊ��";
	for (int j = 0; j < 5; j++) {
		cout << arr[j]<<"\t";
	}
	cout << endl;
	int start = 0;//��¼Ԫ���±����ʼλ��
	int end = sizeof(arr) / sizeof(arr[0])-1;//��¼Ԫ���±��ĩβλ��,Ҫ��1����Ϊ�Ǵ�0��ʼ
	int temp = 0;//�м����
	do  {//Ԫ�ػ���
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;//�±����
		end--;
		continue;
	} while (start < end);
	cout << "�û��������Ԫ������Ϊ��";
	for (int i = 0; i < 5; i++) {
		cout << arr[i]<<"\t";
	}

	system("pause");
	return 0;
}