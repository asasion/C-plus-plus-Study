#include<iostream>
using namespace std;
//������������װһ������������ð������ʵ�ֶ������������������
//ð�������� �β�1 ������׵�ַ �β�2 ����ĳ���
void bubbleSort78(int *arr,int len)//Ϊʲô��*arr����ֱ����arr����Ϊ�����޷����������Ͳ���ʹ��ֵ���ݵķ�ʽʹ���������������ᱻת��Ϊָ�룬����Ҳ����ʹ��arr[]��ʾ����һ����ַ
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i-1; j++) 
		{
			if (arr[j] > arr[j+1])
			{
				//���j>j+1��ֵ�ͽ�����������
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
//1������һ������
	int arr[10] = { 5,6,9,8,7,4,1,2,3,10 };
	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);//�������鳤��
//2������һ��������ʵ��ð������
	bubbleSort(arr, len);
//3����ӡ����������
	print78(arr, len);
	system("pause");
	return 0;
}