#include<iostream>
using namespace std;
#include<string>
//类做友元	作用：让一个类可以访问另一个类的私有成员
class Building1342;//事先声明有一个Building类
class GoodGuy
{
public:
	GoodGuy();
	void visit();//让 参观函数 访问Building中的公共和私有属性
	Building1342 * m_building;//在GoodGuy类中创建一个指向Building类的指针，在创建Building指针的时候会调用Building的构造函数
};
class Building1342
{
	friend class GoodGuy;//GoodGuy是本类的好朋友，可以访问本类中的私有成员
public:
	Building1342();//构造函数，在类外定义成员函数
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外写成员函数
Building1342::Building1342()//Building1342类的构造函数，申明Building属于Building类
{
	//对Building类内的属性赋初值
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGuy::GoodGuy()//同样的类外实现
{
	//创建一个建筑物的对象
	m_building = new Building1342;//为什么要用new创建  new关键字	10.1.3new操作符	用m_building指针接收创建的建筑物对象
}
void GoodGuy::visit()//参观函数的类外实现
{
	cout << "好哥们类（GoodGuy）正在访问" << m_building->m_SittingRoom << endl;
	cout << "好哥们类（GoodGuy）正在访问" << m_building->m_BedRoom << endl;
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