#include<iostream>
#include<string>
using namespace std;
//C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ	�����Ա
//class A{};
//class B//��B���д���һ��A���ʵ����a��B�����ж���A��Ϊ��Ա��A�Ͷ���Ϊ�����Ա
//{
//	A a;
//};
class Phone1327
{
public:
	Phone1327(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	//�ֻ�Ʒ��
	string m_PName;
	~Phone1327()
	{
		cout << "Phone1327�����������ĵ���" << endl;
	}
};
class Person1327
{
public:
	//Phone1327 m_Phone=pName������ʽת����
	Person1327(string name, string pName):m_Name(name),m_Phone(pName)//��ʼ���б� Phone1327 m_Phone=pName������ʽת����
	{
		cout << "Person1327�Ĺ��캯������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone1327 m_Phone;//��Person1327��ʵ����Phone��ʱ������Phoneû�б���������������Phone��
	~Person1327()
	{
		cout << "Peson1327��������������" << endl;
	}
};
//��������Ķ�����Ϊ����ĳ�Ա�������ʱ���ȹ�����Ķ����ٹ�������������˳���������ģ�
void test132701()
{
	Person1327 p("����", "ƻ��Max");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}
int main1327()
{
	test132701();
	system("pause");
	return 0;
}