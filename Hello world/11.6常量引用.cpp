#include<iostream>
using namespace std;
//��������
//���ã�����������Ҫ���������βΣ���ֹ�����
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
void showValue116(const int &val)//��const�����βΣ�ʹ�䲻���Ա��޸�,�޸ľͻᱨ��
{
	//val = 1000;//�β��ں������ڲ����޸�
	cout << "val=" << val << endl;
}
int main116()
{
	//int a = 10;
	//����const֮�󣬱��������޸Ĵ��� int temp = 10;const int &ref =temp;
	//��������һ����ʱ��������������temp��
	//const int& ref = a;//���ñ�����һ��Ϸ����ڴ�ռ�
	//ref = 20;//��ʱ���޷��޸ģ��޶�Ϊֻ��״̬
	int a = 100;
	showValue116(a);
	cout << "a=" << a << endl;//������Ϊ1000��ʵ��Ҳ���޸�Ϊ1000
	system("pause");
	return 0;
 }
//�ܽ᣺
//���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬��� int &ref=10;�Ǵ���� ���Ǽ���const��Ϊconst int& ref =10;�Ϳ���ͨ����