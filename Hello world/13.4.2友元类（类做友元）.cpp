#include<iostream>
using namespace std;
#include<string>
//������Ԫ	���ã���һ������Է�����һ�����˽�г�Ա
class Building1342;//����������һ��Building��
class GoodGuy
{
public:
	GoodGuy();
	void visit();//�� �ιۺ��� ����Building�еĹ�����˽������
	Building1342 * m_building;//��GoodGuy���д���һ��ָ��Building���ָ�룬�ڴ���Buildingָ���ʱ������Building�Ĺ��캯��
};
class Building1342
{
	friend class GoodGuy;//GoodGuy�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
public:
	Building1342();//���캯���������ⶨ���Ա����
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//����д��Ա����
Building1342::Building1342()//Building1342��Ĺ��캯��������Building����Building��
{
	//��Building���ڵ����Ը���ֵ
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGuy::GoodGuy()//ͬ��������ʵ��
{
	//����һ��������Ķ���
	m_building = new Building1342;//ΪʲôҪ��new����  new�ؼ���	10.1.3new������	��m_buildingָ����մ����Ľ��������
}
void GoodGuy::visit()//�ιۺ���������ʵ��
{
	cout << "�ø����ࣨGoodGuy�����ڷ���" << m_building->m_SittingRoom << endl;
	cout << "�ø����ࣨGoodGuy�����ڷ���" << m_building->m_BedRoom << endl;
}
void test134201()
{
	GoodGuy gg;
	gg.visit();
}
int main1342()
{
	test134201();
	system("pause");
	return 0;
}