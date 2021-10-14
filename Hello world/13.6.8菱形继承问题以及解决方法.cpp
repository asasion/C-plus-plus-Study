#include<iostream>
using namespace std;
/*
菱形继承概念：
两个派生类继承同一个基类
又有某个类同时继承着两个派生类
这种继承被称为菱形继承，或者钻石继承
					/---羊类（m_Age）---\
例	动物类（m_Age）						羊驼类（m_Age）
					\---驼类（m_Age）---/
菱形继承问题:
1、羊继承了动物的数据，驼同样也继承了动物的数据，当羊驼使用数据时，就会产生二义性
2、羊驼继承自动物的数据继承了两份，其实这份数据只要需要一份就可以
*/
//动物类
class Animal
{
public:
	int m_Age;
};
//利用虚继承可以解决菱形继承的问题 virtual
//在继承之前加上关键字 virtual 变为虚继承
// Animal类称为	虚基类
//羊类
class Sheep:virtual public Animal{};
//驼类
class Tuo:virtual public Animal{};
//羊驼类
class SheepTuo :public Sheep, public Tuo
{};
void test136801()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当出现菱形继承时，有两个父类拥有相同的数据，需要加以作用域区分
	//虚继承后结果都是28，没有18的结果了。因为虚继承后，两个m_Age属性就变成一个了，因此m_Age的值一开始为18，后又改为28.
	cout << "st.Sheep::m_Age= " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age= " << st.Tuo::m_Age << endl;
	cout << "st.m_Age=" << st.m_Age << endl;//虚继承后多了一种直接访问的方法，并且不会出现访问不到的情况
	//这份数据只要有一份就可以了，菱形继承导致了数据有两份，资源浪费
}
int main1368()
{
	test136801();
	system("pause");
	return 0;
}
//vbptr称为虚基类指针，v-virtual，b-base，ptr-pointer
//虚基类指针指向vbtable，虚基类表
//虚继承会生成一个虚基类指针，指向虚基类表
//Tuo和Sheep都只继承一个虚基类的指针，指向虚基类表，记录了一个偏移量（指针地址的相对便宜量，编译课程中讲到），仅此一份数据
/*
总结：
·菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
·利用虚继承可以解决菱形继承问题
*/