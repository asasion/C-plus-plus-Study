#include<iostream>
using namespace std;
#include<string>
/*
				客厅（public）		卧室（private）
权限			家人、客人			家人、朋友（友元、friend）
友元的三种实现
·全局函数做友元
·类做友元
·成员函数做友元
友元：声明一个函数或类可以拥有访问另一个类私有成员的权限
*/
//全局函数做友元
//建筑物类
class Building1341
{
	friend 	void goodGuy(Building1341 * building);//告诉编译器goodGuy全局函数是一个Building的好朋友，可以访问Building中私有的成员
public:
	Building1341()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public: 
	string m_SittingRoom;//客厅、公共权限属性
private:
	string m_BedRoom;//卧室、私有权限
};
//全局函数
void goodGuy1341(Building1341 *building)//好哥们函数
{
	cout << "好哥们的全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好哥们的全局函数 正在访问：" << building->m_BedRoom << endl;
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