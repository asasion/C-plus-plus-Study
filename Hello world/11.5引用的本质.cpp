#include<iostream>
using namespace std;
//���ʣ����õı�������C++�ڲ���һ��ָ�볣����int  * const p=&a ��ͬ�� int &p=a��
//��ָ�볣����ָ���ָ�����޸ģ�ָ��ָ���ֵ�����޸�  int  * const p=&a;��
void func115(int& ref)
{
	ref = 100;
}
int main115()
{ 
	int a = 10;
	int& ret = a;//��һ���Զ�ת��Ϊ int* const ref =&a;ָ�볣����ָ��ָ�򲻿ɸģ�
				 //ͬʱҲ˵����Ϊʲô���ö��󲻿ɸ���
	ret = 20;//�ڲ�����ref�����ã��Զ�ת��Ϊ��* ref=20;

	cout << "a=" << a << endl;
	cout << "ret=" << ret << endl;
	func115(a);
	cout << "a=" << a << endl;
	cout << "ret=" << ret << endl;
	system("pause");
	return 0;
} 