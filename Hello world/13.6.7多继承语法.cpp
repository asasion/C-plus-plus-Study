#include<iostream>
using namespace std;
/*
C++����һ����̳ж����
�﷨��class ����:�̳з�ʽ ����,�̳з�ʽ ����2 ...
��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
C++ʵ�ʿ����в�����ʹ�ö�̳�
*/
class Base136701
{
public:
	Base136701()
	{
		m_A = 100;
	}
	int m_A;
};
class Base136702
{
public:
	Base136702()
	{
		m_B = 200;
		m_A = 500;
	}
	int m_B;
	int m_A;
};
//���� ��Ҫ�̳�Base136701��Base136702
//�﷨��class ���� ���̳з�ʽ ����1���̳з�ʽ ����2...
class Son1367 :public Base136701, public Base136702
{
public:
	Son1367()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test136701()
{
	Son1367 s;
	cout << "Size of Son =" << sizeof(Son1367) << endl;//���н����Size of Son=16
	cout << "Base136701::m_A =" << s.Base136701::m_A << endl;//��ʱ�����̳е�������������һͬ����Ա���ڶ�̳е�����¾ͻ���ֶ����ԣ����ʶ�����ȷ����Ҫ��������������
	cout << "Base136702::m_A =" << s.Base136702::m_A << endl;
}
int main()
{
	test136701();
	system("pause");
	return 0;
}
/*
�������ö�̳еķ�ʽ��д���룬��ֹ�Ŷӿ���ʱ�����ظ���������ͻ
*/