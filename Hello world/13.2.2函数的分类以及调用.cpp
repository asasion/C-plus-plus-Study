#include<iostream>
using namespace std;
/*
���캯����������ַ�ʽ��
��������Ϊ���вι�����޲ι��죨Ĭ�Ϲ��캯������Ϊ�����д���캯����������Ҳ���ṩһ�����캯���ṩ�����޲ι��캯����
�����ͷ�Ϊ����ͨ����Ϳ�������
���ֵ��÷�ʽ��
���ŷ�����ʾ������ʽת����
*/
class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)//����һ�ݹ��캯�����������캯����д��
	{

	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};
void test132201()
{

}
int main()
{

	system("pause");
	return 0;
}