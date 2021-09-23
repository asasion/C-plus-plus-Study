#include<iostream>
using namespace std;
/*
设计立方体类（Cube）
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等
*/
//设计一个立方体类
//1、创建立方体类
//2、设计属性和行为
//3、设计行为 获取立方体的面积和体积
//4、分别用全局函数和成员函数判断两个立方体是否相等
class Cube
{
	//属性（尽量设计为私有）
private:
	int m_L;//立方体的长
	int m_W;//立方体的宽
	int m_H;//立方体的高
	//行为
//设置获取长宽高的行为
public:
	//设置长
	void setL(int L)
	{
		m_L = L;
	}
	//获取长
	int showL()
	{
		return m_L;
	}
	//设置宽
	void setW(int W)
	{
		m_W = W;
	}
	//获取宽
	int showW()
	{
		return m_W;
	}
	//设置高
	void setH(int H)
	{
		m_H = H;
	}
	//获取高
	int showH()
	{
		return m_H;
	}
//获取立方体面积
	int caculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
//获取立方体体积
	int caculateV()
	{
		return m_L * m_W * m_H;
	}
//利用成员函数来判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.showL() && m_W == c.showW() && m_H == c.showH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
//利用全局函数判读两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)//引用传递就不会另外创建一个数据而是直接引用
{
	if (c1.showL() == c2.showL() && c1.showW() == c2.showW() && c1.showH() == c2.showH())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main1316()
{
	//创建立方体对象
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(11);
	cout<<"c1的面积为："<<c1.caculateS()<<endl;
	cout<<"c1的体积为："<< c1.caculateV()<< endl;
	Cube c2;//创建第二个立方体
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	//利用全局函数判断
	bool ret = isSame(c1,c2);
	cout << "利用全局函数判断的结果：" << endl;
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}
	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	cout << "利用成员函数判断的结果：" << endl;
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}
	system("pause");
	return 0;
}
//如果利用全局函数判断，就需要传入两个实例
//如果利用成员函数判断，就只需要传入一个实例，因为成员函数可以直接访问类里面的成员属性