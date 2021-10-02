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
	//用全局函数访问类中的私有成员
	friend	void goodGuy1341(Building1341 * building);//告诉编译器goodGuy全局函数是一个Building的好朋友，可以访问Building中私有的成员
public:
	Building1341()//创建建筑物的同时给成员变量赋初值
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
	cout << "好哥们的全局函数 正在访问：" << building->m_SittingRoom << endl;//客厅是一个公共属性
	cout << "好哥们的全局函数 正在访问：" << building->m_BedRoom << endl;//直接不能访问m_BedRoom，
																		//解决办法：将函数声明放到类中的最上方
}
void test134101()
{
	Building1341 building;//实例化一个building对象
	goodGuy1341(&building);//传入building的地址
}


int main1341()
{
	test134101();
	system("pause");
	return 0;
}