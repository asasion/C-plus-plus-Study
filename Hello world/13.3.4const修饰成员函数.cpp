#include<iostream>
using namespace std;
/*
常函数：
·成员函数后加const后我们称这个函数为常函数
·常函数内不可以修改成员属性
·成员属性声明时加关键字mutable后，在常函数中依然可以修改
常对象：
·声明对象前加const称该对象为常对象
·常对象只能调用常函数
*/
//常函数
class Person
{
public:
	void showPerson() const	//常函数 
							//不想在函数体内部修改m_A的值，在函数体后加const，与cosnt Person * const this作用相同不可以修改this指针指向的值
							//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以被修改
							//原因：隐含在每一个成员函数内都有一个this指针
							//this指针的本质：this指针的本质是一个指针常量	（Person * const this）	
							//this指针的指向是不可以被修改的，但指针指向的值是可以被修改的
							//如果想要this指针指向的值也不可以被修改，则写为 const Person * const this
	{
		this->m_B=100;
		//this->m_A = 100;
		//this = NULL;//this指针是一个指针常量，它的指向是不可以被修改的
					  //指针一旦指向了对象p，(即p调用了this指针)，this指针就无法指向其他了
					  //this指针指向的值是可以修改的
		
	}
	void func()
	{
	}
	int m_A;
	mutable int m_B;//特殊变量，即使是在常函数中，也可以修改这个值，加mutable修饰后，就可以在常函数中修改m_B的值了
};
void test1321301()
{
	Person p;
	p.showPerson();
}
void test1321302()
{
	const Person p;//在对象前加const，变为常对象，不允许修改指针指向的值
	//p.m_A = 100;
	p.m_B = 100;//m_B的值是可以被修改的，因为它在定义时加了mutable修饰。
	//p.func();//常对象只能调用常函数
			   //原因:因为在类中的普通函数是可以修改一般成员变量的属性的，而常对象调用要求是不能修改一般成员变量属性的，当常对象调用常函数时，有可能间接地修改了一般成员函数的值
			   //因此常对象不能调用普通成员函数


}
int main1334()
{
	test1321301();
	system("pause");
	return 0;
}