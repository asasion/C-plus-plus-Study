#include<iostream>
using namespace std;
//�������������
//���ã���������Զ����������� ����ʵ��ֱ���������p
class Person1352
{
	friend ostream & operator<<(ostream &cout, Person1352 &p);
public:
	Person1352(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//���ó�Ա�������������������		p.operator<<(cout)	�򻯰汾	p << cout
	//ͨ���������ó�Ա�����������������������Ϊ�޷�ʵ��cout�����
//	void operator<<(cout)
//	{
//		
//	}
	int m_A;
	int m_B;
};
//ֻ������ȫ�ֺ������������������
//cout�Ǳ�׼�����ostream�Ķ����������ͣ�����ֻ����һ��
ostream & operator<<(ostream& cout, Person1352& p)//����	operator<<(cout,p)  ��Ϊcout<< p	
{
	cout << " m_A= " << p.m_A << " m_B= " << p.m_B ;
	return cout;//out

}
void test135201()
{
	Person1352 p(10,10);
	cout << p << endl;//��ʽ���˼�룬�������޺�������<<ִ�����<<�����᷵��һ��cout��˾Ϳ����ں���׷�����
}
int main1352()
{
	test135201();
	system("pause");
	return 0;
}
//�ܽ᣺������������������Ԫ����ʵ������Զ�����������