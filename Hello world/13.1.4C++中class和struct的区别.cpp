#include<iostream>
using namespace std;
/*
struct��class������
��C++��struct��class��Ψһ���������Ĭ�ϵķ���Ȩ�޲�ͬ
Ψһ����
��struct	Ĭ��Ȩ��Ϊ������public��
��class		Ĭ��Ȩ��Ϊ˽�У�private��
*/
class C1
{
	int m_A;//Ĭ��Ȩ��	˽��
};
struct C2
{
	int m_A;//Ĭ��Ȩ��	����
};
int main1314()
{
	//C1 c1;
	//c1.m_A = 100;//��	Ĭ��Ȩ��Ϊ˽�У������Ա�����
	C2 c2;
	c2.m_A = 100;//�ṹ��	Ĭ��Ȩ��Ϊ���������Ա�����
	system("pause");
	return 0;
}