#include<iostream>
using namespace std;
//�����ĺ�����ʽ4��
//1���޲��޷�
void test01()
{
	cout << "This is test01:�޲��޷�" << endl;
}

//2���в��޷�
void test02(int a)
{
	cout << "This is test02:�в��޷�������ֵΪ��" << a << endl;
}

//3���޲��з�
int test03()
{
	cout << "This is test03:�޲��з�������ֵΪ��" ;
	return 2021;
}
//4���в��з�
int test04(int b)
{
	cout << "This is test04:�в��з�������ֵΪ��" << b << ",����ֵΪ��";
	return 2024;
}
int main64()
{
	test01();
	test02(2020);
	cout<<test03()<<endl;
	cout << test04 (2023)<< endl;
	system("pause");
	return 0;
}