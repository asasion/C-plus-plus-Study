#include<iostream>
using namespace std;
int main55() {
	//������ { 4,2,8,0,5,7,1,3,9 } ������������
	//1���Ƚ����ڵ�Ԫ�أ������һ���ȵڶ����󣬾ͽ�����������
	//2����ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ��ڶ������ֵ
	//3���ظ����ϲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int temp;
	cout << "����ǰ������Ϊ��";
	
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
		cout << arr[j] << "\t";
	}
		//�ܹ���������Ϊ��Ԫ�ظ���-1
		for (int k = 0; k <9-1;k++){//sizeof(arr)/ sizeof(arr[0])-1; k++) {
			for (int i = 0; i < 9-1-k;i++){//(sizeof(arr)/ sizeof(arr[0]) - k )-1; i++) {//�ڲ�ѭ���Ա� ����=Ԫ�ظ���-��ǰ����-1
				if (arr[i] > arr[i + 1]) {
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
			}
		}
	cout << endl;
	//�����Ľ��
		cout << "����������Ϊ��";
		for (int j = 0; j <sizeof(arr)/ sizeof(arr[0]); j++) {
			cout << arr[j] << "\t";
			
}

	system("pause");
	return 0;
}