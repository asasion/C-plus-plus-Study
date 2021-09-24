#pragma once
#pragma once
#include<iostream>
using namespace std;
//只保留成员函数的声明，并补全代码。
//点类
class Point13171
{
public:
	//设置X坐标
	void setX(int x);

	//获取X坐标
	int getX();

	//设置Y坐标
	void setY(int y);

	//设置Y坐标
	int getY();

private:
	int m_X;
	int m_Y;
};