#include<iostream>
using namespace std;
//�������������	++
//���ã�ͨ�����ص����������ʵ���Լ�����������
//ǰ�õ��� ++a���Ƚ������������ٱ�����a
//���õ��� a++���ȱ�����a�ٽ�����������
//�Զ�������α���
class MyInteger1353
{
	friend ostream& operator<<(ostream& cout, MyInteger1353& MyInterger);
public:
	MyInteger1353()
	{
		m_Num = 0;
	}
	//����ǰ��++�����
	MyInteger1353& operator++()
	{
		//�Ƚ���++�����㣬�ڽ�������һ������
		m_Num++;
		return *this;//Ϊʲô������ֵ���ض���Ҫ�����÷��أ���������Ϊ����ֵ�Ļ�ʼ�����ڶ�ͬһ��ֵ���в�����������++(++a)�����ʱ��ʼ����a������
	}
	//���غ���++�����
	MyInteger1353 operator++(int)//����ֵ�������ֺ������ص�����������Ҫ�������ڼ�һ��int ��int����һ��ռλ���� ��������ǰ�úͺ��õ�����������ֻ����int ��������double float
	{
		//��������return��return�����ź�����������
		//�� ����¼��ʱ�Ľ��
		MyInteger1353 temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�������
		return temp;//���÷���ֵ��ǰ�÷������á�������÷������ã���Ϊ�Ǿֲ�����
	}
private:
	int m_Num;
};
ostream &operator<<(ostream &cout,MyInteger1353 &MyInterger1353)//***Ϊʲô�����������ͺ��һ��&������������ֵ��һ������
{
	cout << MyInterger1353.m_Num;
	return cout;
}
void test135301()
{
	MyInteger1353 myint;
	cout << ++myint << endl;
}
void test135302()
{
	MyInteger1353 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test135301();
	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;
	test135302();
	system("pause");
	return 0;
}
//C++��֧����ʽ�ĺ��õ���
//ǰ�õ����������ã����õ�������ֵ