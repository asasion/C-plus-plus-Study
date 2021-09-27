#include<iostream>
using namespace std;
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
/*
静态成员分为：
·静态成员变量
	·所有对象共享一份数据
	·在编译阶段分配内存
	·类内声明，类外初始化
·静态成员函数
	·所有对象共享一个函数
	·静态成员函数只能访问静态成员变量
*/
class Person1628
{
public:
	//静态成员函数
	static void func()
	{
		cout << "static void func调用" << endl;
	}


};
int main()
{

	system("pause");
	return 0;
}