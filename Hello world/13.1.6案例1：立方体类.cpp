#include<iostream>
using namespace std;
/*
����������ࣨCube��
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/
//���һ����������
//1��������������
//2��������Ժ���Ϊ
//3�������Ϊ ��ȡ���������������
//4���ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube
{
	//���ԣ��������Ϊ˽�У�
private:
	int m_L;//������ĳ�
	int m_W;//������Ŀ�
	int m_H;//������ĸ�
	//��Ϊ
//���û�ȡ����ߵ���Ϊ
public:
	//���ó�
	void setL(int L)
	{
		m_L = L;
	}
	//��ȡ��
	int showL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int W)
	{
		m_W = W;
	}
	//��ȡ��
	int showW()
	{
		return m_W;
	}
	//���ø�
	void setH(int H)
	{
		m_H = H;
	}
	//��ȡ��
	int showH()
	{
		return m_H;
	}
//��ȡ���������
	int caculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
//��ȡ���������
	int caculateV()
	{
		return m_L * m_W * m_H;
	}
//���ó�Ա�������ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.showL() && m_W == c.showW() && m_H == c.showH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube &c1,Cube &c2)//���ô��ݾͲ������ⴴ��һ�����ݶ���ֱ������
{
	if (c1.showL() == c2.showL() && c1.showW() == c2.showW() && c1.showH() == c2.showH())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main1316()
{
	//�������������
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(11);
	cout<<"c1�����Ϊ��"<<c1.caculateS()<<endl;
	cout<<"c1�����Ϊ��"<< c1.caculateV()<< endl;
	Cube c2;//�����ڶ���������
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1,c2);
	cout << "����ȫ�ֺ����жϵĽ����" << endl;
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}
	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	cout << "���ó�Ա�����жϵĽ����" << endl;
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;
}
//�������ȫ�ֺ����жϣ�����Ҫ��������ʵ��
//������ó�Ա�����жϣ���ֻ��Ҫ����һ��ʵ������Ϊ��Ա��������ֱ�ӷ���������ĳ�Ա����