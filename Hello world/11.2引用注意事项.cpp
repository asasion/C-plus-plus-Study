#include<iostream>
using namespace std;
/*
���õ�ע�����
1�����ñ����ʼ��
int &b;�Ǵ����
2�������ڳ�ʼ���󣬲����Ըı�
*/

int main112()
{
	int a = 10;
//1�����ñ����ʼ��
	//int& b;//����
//2�������ڳ��Ի���Ͳ������ٸı�
	int c = 20;
	int& b = a;
	b = c;//�Ǹ�ֵ���������Ǹ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}