#include<iostream>
using namespace std;
//C++�ṩ�˳�ʼ���б��﷨��������ʼ������
//�﷨�����캯��():����1(ֵ1),����2(ֵ2)...{}
class Person1626
{
public:
	////��ͳ��ʼ������
	//Person1626(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}
	//ʹ�ó�ʼ���б�ķ�����ʼ������
	//Person1626() :m_A(10), m_B(20), m_C(30)
	Person1626(int a,int b,int c) : m_A(a), m_B(b), m_C(c)//ʹ�ñ���������ֵ��ע��ð�ŵ�λ��
	{
		cout << "ʹ�ó��Ի��б�ķ�ʽ��ʼ������" << endl;
	}
	int m_A;
	int m_B;
	int m_C;

};
void test162601()
{
	Person1626 p(10, 20, 30);
	//Person1626 p;
	cout << "m_A=" << p.m_A << endl;
	cout<<  "m_B=" << p.m_A << endl;
	cout<<  "m_C=" << p.m_C << endl;
}
int main1626()
{
	test162601();
	system("pause");
	return 0;
}