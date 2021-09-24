#include"13171point.h"
//点类
	//设置X坐标
void Point13171::setX(int x)//Point作用域下的成员函数，而不是全局函数，所以需要限制以下函数的范围
{
	m_X = x;
}
//获取X坐标
int Point13171::getX()
{
	return m_X;
}
//设置Y坐标
void Point13171::setY(int y)
{
	m_X = y;
}
//设置Y坐标
int Point13171::getY()
{
	return m_Y;
}