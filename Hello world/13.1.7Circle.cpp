#include"13171circle.h"
//ֻ����������ʵ��
//���ð뾶
void Circle13171::setR(int r)
{
	m_R = r;
}
//��ȡ�뾶
int Circle13171::getR()
{
	return m_R;
}
//����Բ��
void Circle13171::setCenter(Point13171 Center)
{
	m_Center = Center;
}
//��ȡԲ��
Point13171 Circle13171::getCenter()//��һ�����п�������һ������Ϊ����ĳ�Ա�����ƽṹ�壩
{
	return m_Center;
}
