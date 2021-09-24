//#include<iostream>
//#include"1317circle.h"
//#include"1317point.h"
//using namespace std;
////判断点和圆的关系
//void isInCircle(Circle& c, Point p)
//{
//	//计算两点之间距离的平方
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//计算半径的平方
//	int rDistance = c.getR() * c.getR();
//	if (rDistance == distance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//int main13171()
//{
//	//创建一个圆
//	Circle c1;
//	c1.setR(10);//设置圆的半径
//	Point center;
//	center.setX(10);//设置圆心的X坐标
//	center.setY(0);//设置圆心的Y坐标
//	c1.setCenter(center);//将圆心坐标传入圆类中
//	//创建一个点
//	Point p1;
//	p1.setX(10);
//	p1.setY(11);
//	//判断关系
//	isInCircle(c1, p1);
//	system("pause");
//	return 0;
//}