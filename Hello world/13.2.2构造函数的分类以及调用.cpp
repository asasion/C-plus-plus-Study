#include<iostream>
using namespace std;
/*
构造函数分类的两种方式：
按参数分为：有参构造和无参构造（默认构造函数，因为如果不写构造函数，编译器也会提供一个构造函数提供的是无参构造函数）
按类型分为：普通构造和拷贝构造
三种调用方式：
括号法、显示法、隐式转换法
*/
class Person1322
{
public:
	Person1322()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person1322(int a)//构造函数用于初始化
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person1322(const Person1322 &p)//拷贝一份构造函数，拷贝构造函数的写法
	{
		//将传入的人身上的所有的属性拷贝到当前对象身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person1322()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age=0;
};
void test132201()
{
	//1、括号法
	 Person1322 p;//默认构造函数的调用
	 Person1322 p2(10);//有参构造函数，调用person1322(int a)		
	 Person1322 p3(p2);//拷贝构造函数调用
	 //调用默认构造函数时，不要加小括号
	 //cout << "p2的年龄为：" << p2.age << endl;//
	 //cout << "p3的年龄为：" << p3.age << endl;//
	//Person1322 p1();//没有创建出对象，因为这一行代码编译器会认为是一个函数的声明，不会认为是在创建对象。
	//2、显示法
	//Person1322 p1;//调用无参构造
	//Person1322 p2 = Person1322(10);//调用有参构造		单把括号右边拿出来就是一个匿名构造
	//调用拷贝构造
	//Person1322 p3 = Person1322(p2);//拷贝构造
	//Person1322(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象   立马析构，在test函数还没有执行完前就析构掉
	cout << "aaaa" << endl;
	//注意事项2
	// 不要利用拷贝构造函数来初始化匿名对象
	//Person1322(p3);//报错，Person1322 p3重定义		编译器会认为Person(p3)===Person p3;名称重复；编译器会认为这是一个对象声明
	//3、隐式转换法
	Person1322 p4 = 10;//相当于写了Person1322 p4=Person(10);//Person有参构造调用
	Person1322 p5 = p4;//拷贝构造
}
int main1322()
{
	test132201();
	system("pause");
	return 0;
}