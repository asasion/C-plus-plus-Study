#include<iostream>
using namespace std;
#include<string>
//������Ԫ
class Building;//����������һ��Building��
class GoodGuy
{
public:
	GoodGuy();
	void visit();//�� �ιۺ��� ����Building�еĹ�����˽������
	Building * m_building;//��GoodGuy���д���һ��ָ��Building���ָ��
};
class Building
{
public:
	Building();//���캯���������ⶨ���Ա����
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//����д��Ա����
Building::Building()//����Building����Building��
{
	//��Building���ڵ����Ը���ֵ
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGuy::GoodGuy()//ͬ��������ʵ��
{
	//����һ��������Ķ���
	m_building = new Building;//ΪʲôҪ��new����
}
void GoodGuy::visit()//�ιۺ���������ʵ��
{
	cout << "�ø����ࣨGoodGuy�����ڷ���" << m_building->m_SittingRoom << endl;
}
void test134201()
{
	GoodGuy gg;
	gg.visit();
}
int main()
{
	test134201();
	system("pause");
	return 0;
}