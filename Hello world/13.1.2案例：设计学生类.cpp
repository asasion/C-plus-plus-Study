#include<iostream>
#include<string>
using namespace std;
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student1312
{
	//����Ȩ�ޣ�����Ȩ��
public:
	//����
	string m_Name;//ѧ������
	int m_ID=0;//ѧ��ѧ��
	//��Ϊ����ʾ������ѧ��
	void showStudent1312()
	{
		cout << "������" << m_Name  << " ѧ�ţ�" << m_ID << endl;
	}
	//ͨ�������Ϊ��������Խ��и�ֵ����
	//��������ֵ
	void setName1312(string name)
	{
		m_Name = name;
	}
	void setID1312(int ID)
	{
		m_ID = ID;
	}
};
int main1312()
{
	//ʵ�������󣬴���һ�������ѧ��
	Student1312 s1;
	//��s1����������Ը�ֵ����
	s1.m_Name = "����";
	s1.m_ID = 1;
	s1.showStudent1312();
	Student1312 s2;
	s2.m_Name = "����";
	s2.m_ID = 2;
	s2.showStudent1312();
	Student1312 s3;
	s3.setName1312("����");
	s3.setID1312(3);
	s3.showStudent1312();
	system("pause");
	return 0;
}
//����ֵ��ע��ĵ㣺
//���е����Ժ���Ϊ����Ϊ���Եĳ�Ա
//���е����Գ�Ϊ ��Ա���� �� ��Ա����
//���е���Ϊ��Ϊ ��Ա���� �� ��Ա����