#include<iostream>
using namespace std;
#include<string>
//������Ԫ
class Building//����������һ��Building��
class GoodGuy
{
public:
	GoodGuy();
	void visit();//�ιۺ��� ����Building�е�����
	Building * m_building;//����һ��Building���ָ��

};
class Building
{
public:
	Building();
public:
	string m_Sittingroom;//����
private:
	string m_BedRoom;//����
};
//����д��Ա����
Building::Building()
{
	m_Sittingroom = "����";
	m_BedRoom = "����";
}
GoodGuy::GoodGuy()
{
	//����һ��������Ķ���
	m_building = new Building;//ΪʲôҪ��new����
}
void GoodGuy::visit()
{
	cout << "�ø��ǣ�GoodGuy�����ڷ���" << m_building->m_Sittingroom << endl;
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