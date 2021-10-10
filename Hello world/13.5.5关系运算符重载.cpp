#include<iostream>
using namespace std;
//作用：重载关系运算符，可以让两个自定义类型对象进行对比操作
//重载==和!=，让其可以对自定义的数据类型进行比较
class Person1355
{
public:
	Person1355(string name, int age)//构造函数赋初值
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
	bool operator==(Person1355& p)
	{
		if (this->m_Name == p.m_Name && this->m_Name == p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	bool operator!=(Person1355& p)
	{
		if (this->m_Name != p.m_Name && this->m_Name != p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};
void test135501()
{
	Person1355 p1("Tom", 18);
	Person1355 p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "p1 和 p2 相等" << endl;
	}
	else
	{
		cout << "p1 和 p2 是不相等的" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1 和 p2 是不相等的" << endl;
	}
	else
	{
		cout << "p1 和 p2 相等" << endl;
	}
}
int main1355()
{
	test135501();
	system("pause");
	return 0;
}