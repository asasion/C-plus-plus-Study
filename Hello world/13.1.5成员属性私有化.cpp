#include<iostream>
#include<string>
using namespace std;
/*
优点1：将所有成员属性设置为私有，就可以自己控制读写权限
优点2：对于写权限，我们可以检测数据的有效性
*/
//设计一个人类
class Person1315
{
public://对外提供一个公共的成员函数，来侧面地设置对类的读写权限
	//写姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//读姓名
	string getName()
	{
		return m_Name;
	}
	//读年龄	可读可写 如果想修改年龄，年龄的范围必须是0~150之间
	int getAge()
	{
		//m_Age=0;//初始化为0岁
		return m_Age;//直接运行是一段乱码，因为m_Age还没有被赋值
	}
	//写年龄
	void setAge(int age)
	{
		//年龄范围的有效性认证
		if (age < 0 || age>150)
		{
			cout << "您输入的年龄有误！" << endl;
			return;//直接退出函数
		}
		m_Age = age;
	}
	//写情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//姓名	权限：可读可写
	string m_Name;
	//年龄	权限：只读
	int m_Age = 17;
	//情人	权限：只写
	string m_Lover;
};
int main1315()
{
	Person1315 p;
	p.setName("张三") ;
	p.setAge(1000);
	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;
	p.setLover("你好");
	//cout<<"情人为"<<p.getLover()<<endl;//只写权限是不可以被访问的
	system("pause");
	return 0;
}
//类名不要重复，不然会报错