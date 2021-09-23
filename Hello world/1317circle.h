#pragma once
#pragma once//防止头文件重复包含
#include<iostream>
#include"1317point.h"
//使用到了point类，将point头文件包含进来。
using namespace std;
//只保留成员函数的声明，把实现都删掉，并补全代码分号。
class Circle
{
public:
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void setCenter(Point Center);
	//获取圆心
	Point getCenter();//在一个类中可以让另一个类作为本类的成员（类似结构体）
private:
	int m_R;//半径
	Point m_Center;//圆心
};