#include<iostream>
using namespace std;
//��������
//���ã�������������ͬ������ظ���
/*
������������������
��ͬһ����������
������������ͬ
�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
*/
//����ȫ����������
//����������ͬ
//�����Ĳ������Ͳ�ͬ���߸�����ͬ����˳��ͬ
void func122(int a)
{
	cout << "func122�ĵ���1" << endl;
}
void func122(double a,int b)
{
	cout << "func122�ĵ���2" << endl;
}
void func122(int b,double a)
{
	cout << "func122�ĵ���3" << endl;
}
int main123()
{
	func122(1,3.1415);
	system("pause");
	return 0;
}
//ע����������ķ���ֵ��������Ϊ�������ҵ����� ��void func(double a)��int func(int a) �Ͳ���������