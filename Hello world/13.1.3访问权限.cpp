#include<iostream>
using namespace std;
/*
类在设计时，可以把属性和行为放在不同的权限下，加以控制
访问权限有三种：
1.public	公共权限	成员在 类内可以访问 类外可以访问
2.protected	保护权限	成员在 类内可以访问 类外不可以访问
3.private	私有权限	成员在 类内可以访问 类外不可以访问
2. 3. 的区别
继承有父子关系，如果是保护权限，父类中的一些权限子类也可以访问，类似：父亲的车
				如果是私有权限，父类私有，子类不可以访问。		类似：银行卡密码
*/
class Person
{
	//公共权限的成员
public:
	string m_Name;//姓名
	//保护权限
protected:
	string m_Car;//汽车
	//私有权限
private:
	int m_Password=0;//银行卡密码
private:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};
int main1313()
{
	Person p1;//实例化一个具体的对象
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";//保护权限的内容  在类外访问不到
	//p1.m_Password=123;//私有权限的内容  在类外访问不到
	//p1.func();//这个函数被声明为私有权限时不可以被访问
	system("pause");
	return 0;
}