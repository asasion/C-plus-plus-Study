#include<iostream>
#include<string>
using namespace std;
/*
�ŵ�1�������г�Ա��������Ϊ˽�У��Ϳ����Լ����ƶ�дȨ��
�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/
//���һ������
class Person1315
{
public://�����ṩһ�������ĳ�Ա����������������ö���Ķ�дȨ��
	//д����
	void setName(string name)
	{
		m_Name = name;
	}
	//������
	string getName()
	{
		return m_Name;
	}
	//������	�ɶ���д ������޸����䣬����ķ�Χ������0~150֮��
	int getAge()
	{
		//m_Age=0;//��ʼ��Ϊ0��
		return m_Age;//ֱ��������һ�����룬��Ϊm_Age��û�б���ֵ
	}
	//д����
	void setAge(int age)
	{
		//���䷶Χ����Ч����֤
		if (age < 0 || age>150)
		{
			cout << "���������������" << endl;
			return;//ֱ���˳�����
		}
		m_Age = age;
	}
	//д����
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//����	Ȩ�ޣ��ɶ���д
	string m_Name;
	//����	Ȩ�ޣ�ֻ��
	int m_Age = 17;
	//����	Ȩ�ޣ�ֻд
	string m_Lover;
};
int main1315()
{
	Person1315 p;
	p.setName("����") ;
	p.setAge(1000);
	cout << "����Ϊ��" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLover("���");
	//cout<<"����Ϊ"<<p.getLover()<<endl;//ֻдȨ���ǲ����Ա����ʵ�
	system("pause");
	return 0;
}
//������Ҫ�ظ�����Ȼ�ᱨ��