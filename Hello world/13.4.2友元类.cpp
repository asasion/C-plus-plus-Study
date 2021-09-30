#include<iostream>
using namespace std;
#include<string>
//类做友元
class Building//事先声明有一个Building类
class GoodGuy
{
public:
	GoodGuy();
	void visit();//参观函数 访问Building中的属性
	Building * m_building;//创建一个Building类的指针

};
class Building
{
public:
	Building();
public:
	string m_Sittingroom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外写成员函数
Building::Building()
{
	m_Sittingroom = "客厅";
	m_BedRoom = "卧室";
}
GoodGuy::GoodGuy()
{
	//创建一个建筑物的对象
	m_building = new Building;//为什么要用new创建
}
void GoodGuy::visit()
{
	cout << "好哥们（GoodGuy）正在访问" << m_building->m_Sittingroom << endl;
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