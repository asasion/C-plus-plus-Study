#include<iostream>
using namespace std;
//����һ������
int add(int num1, int num2)//�������� ��������(�β��б�)
{
	int sum = num1 + num2;
	return sum;
}

int main62()
{
	//main�����е���add����
	int a = 10;
	int b = 20;
	//���������﷨���������ƣ�������
	//a��b��Ϊ ʵ�ʲ��������ʵ��
	//���������ʱ��num1��num2��û�о�������ݣ�ֻ��һ����ʽ����������β�
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	cout << add(a, b) << endl;
	system("pause");
	return 0;
}