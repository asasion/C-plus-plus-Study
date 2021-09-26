#include<iostream>
using namespace std;
//深拷贝是面试经典问题，也是常见的一个坑
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
class Person1324
{
public:
	Person1324()//默认构造函数
	{
		cout << "Person1324的默认构造函数调用" << endl;
}
	Person1324(int age)//有参构造函数
	{
		m_Age = age;
		cout << "Person1324的有参构造函数调用" << endl;
	}
	~Person1324()//析构函数
	{
		cout << "Person1324的析构函数调用" << endl;
}
	int m_Age=0;//年龄
};
void test132401()
{
	Person1324 p1(18);
	cout << "p1的年龄为：" << p1.m_Age << endl;
}
int main1324()
{
	void test132401();
	system("pause");
	return 0;
}