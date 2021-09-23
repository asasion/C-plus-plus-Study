//#include<iostream>
//using namespace std;
////设计一个圆形类（Circle）和一个点类（Point），计算点和圆的位置关系
////点到圆心的距离==半径	点在圆上
////点到圆心的距离>半径	点在圆外
////点到圆心的距离<半径	点在圆内
////设圆心的坐标是(x1,y1),点的坐标是(x2,y2)C
//////点类
//class Point
//{
//public:
//	//设置X坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取X坐标
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y坐标
//	void setY(int y)
//	{
//		m_X = y;
//	}
//	//设置Y坐标
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//获取圆心
//	Point getCenter()//在一个类中可以让另一个类作为本类的成员（类似结构体）
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//	Point m_Center;//圆心
//};
////判断点和圆的关系
//void isInCircle(Circle &c,Point p)
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
//	else if (distance>rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//int main1317()
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
//	isInCircle(c1,p1);
//	system("pause");
//	return 0;
//}