#include<iostream>
#include<string>
using namespace std;
//C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ	�����Ա
//class A{};
//class B//��B���д���һ��A���ʵ����a��B�����ж���A��Ϊ��Ա��A�Ͷ���Ϊ�����Ա
//{
//	A a;
//};
class Phone1627
{
public:
	Phone1627(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	//�ֻ�Ʒ��
	string m_PName;
	~Phone1627()
	{
		cout << "Phone1627�����������ĵ���" << endl;
	}
};
class Person1627
{
public:
	//Phone1627 m_Phone=pName������ʽת����
	Person1627(string name, string pName):m_Name(name),m_Phone(pName)//��ʼ���б� Phone1627 m_Phone=pName������ʽת����
	{
		cout << "Person1627�Ĺ��캯������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone1627 m_Phone;//��Person1627��ʵ����Phone��ʱ������Phoneû�б���������������Phone��
	~Person1627()
	{
		cout << "Peson1627��������������" << endl;
	}
};
//��������Ķ�����Ϊ����ĳ�Ա�������ʱ���ȹ�����Ķ����ٹ�������������˳���������ģ�
void test162701()
{
	Person1627 p("����", "ƻ��Max");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}
int main()
{
	test162701();
	system("pause");
	return 0;
}