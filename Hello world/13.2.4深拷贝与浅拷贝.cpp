#include<iostream>
using namespace std;
//��������Ծ������⣬Ҳ�ǳ�����һ����
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������
class Person1324
{
public:
	Person1324()//Ĭ�Ϲ��캯��
	{
		cout << "Person1324��Ĭ�Ϲ��캯������" << endl;
}
	Person1324(int age)//�вι��캯��
	{
		m_Age = age;
		cout << "Person1324���вι��캯������" << endl;
	}
	~Person1324()//��������
	{
		cout << "Person1324��������������" << endl;
}
	int m_Age=0;//����
};
void test132401()
{
	Person1324 p1(18);
	cout << "p1������Ϊ��" << p1.m_Age << endl;
}
int main1324()
{
	void test132401();
	system("pause");
	return 0;
}