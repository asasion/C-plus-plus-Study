#include<iostream>
using namespace std;
//���ã���������ʱ�������������õļ������β�����ʵ��
//�ŵ㣺���Լ�ָ���޸�ʵ��
//1��ֵ����
//��������
void mySwap01(int a, int b)
{
	int temp = a;
	a=b;
	b = temp;
	cout << "mySwap_01 a=" << a << endl;
	cout << "mySwap_01 b=" << b << endl;
	}
//2����ַ����
void mySwap02(int* a, int* b)//��ָ��ȥ���յ�ַ
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "mySwap_02 a=" << *a << endl;
	cout << "mySwap_02 b=" << *b << endl;
}
//3�����ô���
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap_03 a=" << a << endl;
	cout << "mySwap_03 b=" << b << endl;
}
int main113()
{
	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//�����a,b��ֵ�������ı䣬�βν����޷�����ʵ�ν���
	//mySwap02(&a,&b);
	mySwap03(a, b);//���ô��ݺ͵�ַ���ݶ������β�����ʵ��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	system("pause");
	return 0;
}
//�ܽ᣺ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨��������򵥡�