#include<iostream>
using namespace std;
//���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���
//����==��!=��������Զ��Զ�����������ͽ��бȽ�
class Person1355
{
public:
	Person1355(string name, int age)//���캯������ֵ
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
	bool operator==(Person1355& p)
	{
		if (this->m_Name == p.m_Name && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	bool operator!=(Person1355& p)
	{
		if (this->m_Name != p.m_Name && this->m_Name != p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};
void test135501()
{
	Person1355 p1("Tom", 18);
	Person1355 p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "p1 �� p2 ���" << endl;
	}
	else
	{
		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
	}
	else
	{
		cout << "p1 �� p2 ���" << endl;
	}
}
int main1355()
{
	test135501();
	system("pause");
	return 0;
}