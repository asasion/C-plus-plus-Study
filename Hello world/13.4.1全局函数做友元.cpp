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
	//��ȫ�ֺ����������е�˽�г�Ա
	friend	void goodGuy1341(Building1341 * building);//���߱�����goodGuyȫ�ֺ�����һ��Building�ĺ����ѣ����Է���Building��˽�еĳ�Ա
public:
	Building1341()//�����������ͬʱ����Ա��������ֵ
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
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;//������һ����������
	cout << "�ø��ǵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;//ֱ�Ӳ��ܷ���m_BedRoom��
																		//����취�������������ŵ����е����Ϸ�
}
void test134101()
{
	Building1341 building;//ʵ����һ��building����
	goodGuy1341(&building);//����building�ĵ�ַ
}


int main1341()
{
	test134101();
	system("pause");
	return 0;
}