#include<iostream>
using namespace std;
//ָ��ͺ���
//ʵ���������ֽ����ĺ���
void swap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01_a=" << a << endl;//�βη����ı�
	cout << "swap02_b=" << b << endl;
}
void swap02(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main77()
{
	//1��ֵ���ݣ��βθı䲻��ʵ�Σ�ʵ�����뵽�βΣ��β��Ǻ����еı�����ʵ���ǵ��ú���ʱ���뵽�βεı���
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;//ʵ��û�з����ı�
	cout << "b=" << b << endl;
	//2����ַ����
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);//����a��b�ĵ�ַ
	cout << "a=" << a << endl;//ʵ��Ҳ�ᷢ���ı䣬��Ϊָ��ָ��ʵ�Σ�����ָ���ڴ�ŵĵ�ַλ�ã�ʵ��Ҳ�ͽ������ڴ�ռ�
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}