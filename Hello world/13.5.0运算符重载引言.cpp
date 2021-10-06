#include<iostream>
using namespace std;
//运算符重载的概念:对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型。
//加号运算符重载
//作用：实现两个自定义数据类型的相加运算，例如两个Person的实例化的属性分别相加
/*
对于内置的数据类型，编译器知道如何进行运算
对于类的实例属性相加则可以通过自己写成员函数，实现两个对象相加属性后返回新的对象 return 
*/
class Person1350
{
public:
	int m_A;
	int m_B;
	Person1350 PersonAddPerson(Person1350& p)
	{
		Person1350 temp;
		temp.m_A = this->m_A + p.m_A;//为什么是this指针，this指向类中的成员变量，谁调用谁就是this
		temp.m_B = this->m_A + p.m_B;
		return temp;//返回的是Person类型的值
	}
};
int main1350()
{
	Person1350 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1350 p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person1350 p3;
	p3 = p1.PersonAddPerson(p2);//当使用编译器提供的operator+之后，就可以简化为：p3=p1+p2;
								//当然也可以写作：p3=p1.operator+(p2);
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	system("pause");
	return 0;
}