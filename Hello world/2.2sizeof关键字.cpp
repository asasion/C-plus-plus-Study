#include<iostream>
using namespace std;
int main22() {
	//��sizeof�������������ռ���ڴ�ռ��С
	//���Σ��ڴ�ռ��С����short ��2��	int ��4�� long��4�� long long��8��
	//�﷨��sizeof����������/������
	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "num1ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "num2ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "num3ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	cout << "num4ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num4) << endl;
	return 0;
}
//���δ�С�Ƚ�
//short<int<=long<=long long