#include<iostream>
using namespace std;
#include<string>
/*
				������public��		���ң�private��
Ȩ��			���ˡ�����			���ˡ����ѣ���Ԫ��friend��
��Ԫ������ʵ��
��ȫ�ֺ�������Ԫ
��������Ԫ
����Ա��������Ԫ
��Ԫ������һ�������������ӵ�з�����һ����˽�г�Ա��Ȩ��
*/
//ȫ�ֺ�������Ԫ
//��������
class Building
{
	friend 	void goodGuy(Building* building);//���߱�����goodGuyȫ�ֺ�����һ��Building�ĺ����ѣ����Է���Building��˽�еĳ�Ա
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public: 
	string m_SittingRoom;//����������Ȩ������
private:
	string m_BedRoom;//���ҡ�˽��Ȩ��
};
//ȫ�ֺ���
void goodGuy(Building *building)//�ø��Ǻ���
{
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test134101()
{
	Building building;
	goodGuy(&building);
}


int main1341()
{
	test134101();
	system("pause");
	return 0;
}