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
class Building1341
{
	friend 	void goodGuy(Building1341 * building);//���߱�����goodGuyȫ�ֺ�����һ��Building�ĺ����ѣ����Է���Building��˽�еĳ�Ա
public:
	Building1341()
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
void goodGuy1341(Building1341 *building)//�ø��Ǻ���
{
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test134101()
{
	Building1341 building;
	goodGuy1341(&building);
}


int main1341()
{
	test134101();
	system("pause");
	return 0;
}