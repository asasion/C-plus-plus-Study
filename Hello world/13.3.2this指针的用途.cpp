#include<iostream>
using namespace std;
/*
每一个非静态成员函数只会生成一份函数实例，也就是多个同类型的对象会公用同一段代码
问题：代码是如何区分是哪个对象调用自己的？
答：C++通过提供特殊的对象指针，this指针解决上述的问题，this指针指向被调用的成员函数所属的对象。
	例如：当对象p1调用指针，this便指向p1，当对象p2调用指针，this便指向p2。
·this指针是隐含每一个非静态成员函数内的一种指针
·this指针不需要定义，可以直接使用
this指针的用途：
·当形参和成员变量同名时，可以用this指针来区分
·在类的非静态成员函数中返回对象本身，可以用return *this
*/
class Person13211
{
public:
	Person13211(int age)
	{
		this->age = age;//this指针指向的是被调用的成员函数所属的对象，第一个age指类中的成员age
	}
	int age;//此变量最好加m_修饰，不然编译器会认为三个age是同一个age。
			//解决办法2：this->age
	Person13211& PersonAddage13211(Person13211 p)
	{
		this->age += p.age;
		return *this;//this指针指向p2，返回p2对象的本体，返回一个Person13211的引用
	}
	Person13211 PersonAddage1321101(Person13211& p)//当成员函数输出的是值而不是对象，输出的结果是
	{
		this->age += p.age;
		return *this;
	}
};
//1、解决名称冲突
	void test1321101()
{
		Person13211 p1(18);
		cout << "p1的年龄为：" << p1.age << endl;
}
//2、返回对象本身return *this
	void test1321102()//让对象p1的10加到对象p2的10上面
	{
		Person13211 p1(10);

		Person13211 p2(10);
		p2.PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1);//链式编程思想，例如：cout<<可以一直追加
		//将对象p1的值加到对象p2上,当PersonAddage13211函数的返回值是void时，无返回值。因此不能再调用函数
		cout << "p2的年龄为多大：" << p2.age << endl;
	}
	//void test13221103()
	//{
	//	Person13211 p1(10);

	//	Person13211 p2(10);

	//	p2.PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1);
	//}
int main1332()
{
	test1321101();//输出结果：p1的年龄为：-858993460
				  //原	  因：编译器认为三个age是同一个age，因此并未对类的属性age进行赋值操作。
				  //		  这也就解释了为什么之前在类内定义的变量都加一个m_，其中m代表member,类中的成员
	test1321102();
	test1321101();
	system("pause");
	return 0;
}