//#include<iostream>
//using namespace std;
////���һ��Բ���ࣨCircle����һ�����ࣨPoint����������Բ��λ�ù�ϵ
////�㵽Բ�ĵľ���==�뾶	����Բ��
////�㵽Բ�ĵľ���>�뾶	����Բ��
////�㵽Բ�ĵľ���<�뾶	����Բ��
////��Բ�ĵ�������(x1,y1),���������(x2,y2)C
//////����
//class Point
//{
//public:
//	//����X����
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡX����
//	int getX()
//	{
//		return m_X;
//	}
//	//����Y����
//	void setY(int y)
//	{
//		m_X = y;
//	}
//	//����Y����
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
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//��ȡԲ��
//	Point getCenter()//��һ�����п�������һ������Ϊ����ĳ�Ա�����ƽṹ�壩
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//	Point m_Center;//Բ��
//};
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle &c,Point p)
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
//	else if (distance>rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main1317()
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
//	isInCircle(c1,p1);
//	system("pause");
//	return 0;
//}