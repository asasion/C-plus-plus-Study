#pragma once
#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include"1317point.h"
//ʹ�õ���point�࣬��pointͷ�ļ�����������
using namespace std;
//ֻ������Ա��������������ʵ�ֶ�ɾ��������ȫ����ֺš�
class Circle
{
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Point Center);
	//��ȡԲ��
	Point getCenter();//��һ�����п�������һ������Ϊ����ĳ�Ա�����ƽṹ�壩
private:
	int m_R;//�뾶
	Point m_Center;//Բ��
};