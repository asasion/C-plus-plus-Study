//#include<iostream>
//#include"1317circle.h"
//#include"1317point.h"
//using namespace std;
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point p)
//{
//	//��������֮������ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//����뾶��ƽ��
//	int rDistance = c.getR() * c.getR();
//	if (rDistance == distance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main13171()
//{
//	//����һ��Բ
//	Circle c1;
//	c1.setR(10);//����Բ�İ뾶
//	Point center;
//	center.setX(10);//����Բ�ĵ�X����
//	center.setY(0);//����Բ�ĵ�Y����
//	c1.setCenter(center);//��Բ�����괫��Բ����
//	//����һ����
//	Point p1;
//	p1.setX(10);
//	p1.setY(11);
//	//�жϹ�ϵ
//	isInCircle(c1, p1);
//	system("pause");
//	return 0;
//}