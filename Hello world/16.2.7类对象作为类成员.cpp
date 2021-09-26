#include<iostream>
#include<string>
using namespace std;
//C++类中的成员可以是另一个类的对象，我们称该成员为	对象成员
//class A{};
//class B//在B类中创建一个A类的实例化a，B类中有对象A作为成员，A就定义为对象成员
//{
//	A a;
//};
class Phone1627
{
public:
	Phone1627(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	//手机品牌
	string m_PName;
	~Phone1627()
	{
		cout << "Phone1627的析构函数的调用" << endl;
	}
};
class Person1627
{
public:
	//Phone1627 m_Phone=pName类似隐式转换法
	Person1627(string name, string pName):m_Name(name),m_Phone(pName)//初始化列表 Phone1627 m_Phone=pName类似隐式转换法
	{
		cout << "Person1627的构造函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone1627 m_Phone;//在Person1627中实例化Phone类时，由于Phone没有被创建，所以先有Phone类
	~Person1627()
	{
		cout << "Peson1627的析构函数调用" << endl;
	}
};
//当其他类的对象作为本类的成员，构造的时候先构造类的对象，再构造自身，析构的顺序是怎样的？
void test162701()
{
	Person1627 p("张三", "苹果Max");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}
int main()
{
	test162701();
	system("pause");
	return 0;
}