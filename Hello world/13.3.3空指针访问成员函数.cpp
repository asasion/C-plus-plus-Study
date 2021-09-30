#include<iostream>
using namespace std;
/*
C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
如果用到this指针，需要加以判断保证代码的健壮性
*/
class Person13212
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		cout << "Age=" <<this-> m_Age << endl;//在类的属性前都默认有一个this->指针，表示是当前类中的属性。
		
											  //而创建的指针p是一个空指针，没有对象实体，没有指向一个确切的对象数据，一个空的值无法访问内部数据
	/*
	解决办法：
	if(this==NULL)//如果输入的是空指针，就直接return掉，代码结束运行，提高代码的健壮性
	{
	return;
	}
	*/
	
	}
	int m_Age;
};
void test1321201()
{
	Person13212* p = NULL;//定义一个指针指向空
	p->showClassName();//用空指针调用类中的函数，第一个函数内没有成员
	p->showPersonAge();
}
int main1333()
{
	test1321201();	//结果：引发异常，代码有错
					//将showPersonAge注释掉保留showClassName，报错消失
					//将showClassName注释掉保留showPersonAge，报错复现		报错原因：传入的指针为空（NULL）
	system("pause");
	return 0;
}