#include<iostream>
#include<string>
using namespace std;
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student1312
{
	//访问权限：公共权限
public:
	//属性
	string m_Name;//学生姓名
	int m_ID=0;//学生学号
	//行为：显示姓名和学号
	void showStudent1312()
	{
		cout << "姓名：" << m_Name  << " 学号：" << m_ID << endl;
	}
	//通过类的行为给类的属性进行赋值操作
	//给姓名赋值
	void setName1312(string name)
	{
		m_Name = name;
	}
	void setID1312(int ID)
	{
		m_ID = ID;
	}
};
int main1312()
{
	//实例化对象，创建一个具体的学生
	Student1312 s1;
	//给s1对象进行属性赋值操作
	s1.m_Name = "张三";
	s1.m_ID = 1;
	s1.showStudent1312();
	Student1312 s2;
	s2.m_Name = "李四";
	s2.m_ID = 2;
	s2.showStudent1312();
	Student1312 s3;
	s3.setName1312("王五");
	s3.setID1312(3);
	s3.showStudent1312();
	system("pause");
	return 0;
}
//其他值得注意的点：
//类中的属性和行为都称为属性的成员
//类中的属性称为 成员属性 或 成员变量
//类中的行为称为 成员函数 或 成员方法