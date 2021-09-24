#include"13171circle.h"
//只保留函数的实现
//设置半径
void Circle13171::setR(int r)
{
	m_R = r;
}
//获取半径
int Circle13171::getR()
{
	return m_R;
}
//设置圆心
void Circle13171::setCenter(Point13171 Center)
{
	m_Center = Center;
}
//获取圆心
Point13171 Circle13171::getCenter()//在一个类中可以让另一个类作为本类的成员（类似结构体）
{
	return m_Center;
}
