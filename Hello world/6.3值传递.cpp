#include<iostream>
using namespace std;
//ֵ������ָ��������ʱʵ�ν���ֵ������β�
//ֵ����ʱ������βη�����ֵ�ı䣬����Ӱ�쵽ʵ��
//�����������Ҫ����ֵ��������ʱ�������Ϳ���Ϊvoid�ͣ��޷���ֵ���ͣ�
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//����ֵ����Ҫʱ�����Բ�дreturn
}
int main63()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//a��b��ֵ�����ᷢ���ı�
	system("pause");
	return 0;
}
