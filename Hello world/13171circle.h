#pragma once
#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include"13171point.h"
//ʹ�õ���point�࣬��pointͷ�ļ�����������
using namespace std;
//ֻ������Ա��������������ʵ�ֶ�ɾ��������ȫ����ֺš�
class Circle13171
{
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Point13171 Center);
	//��ȡԲ��
	Point13171 getCenter();//��һ�����п�������һ������Ϊ����ĳ�Ա�����ƽṹ�壩
private:
	int m_R;//�뾶
	Point13171 m_Center;//Բ��
};