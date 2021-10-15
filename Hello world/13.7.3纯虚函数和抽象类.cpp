#include<iostream>
using namespace std;
/*
在多态中，通常父类中的虚函数的实现是毫无意义的，主要都是调用子类重写的内容
因此可以将虚函数改为***纯虚函数***
纯虚函数语法：virtual 返回值类型 函数名 (参数列表) = 0;
当类中有了纯虚函数，这个类也称为抽象类
抽象类特点：
·无法实例化对象，不允许实例化
·子类必须重写抽象类中的纯虚函数，这个类也属于抽象类
*/
class Base1373
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;//纯虚函数，在有virtual关键字的基础上再写 = 0

};
	//Base1373 b;//抽象类是无法实例化对象的，报错，无法实例化
	//new Base1373;//new一个堆区对象同样是不允许的
class Son1373 :public Base1373
{
	
public:
	virtual void func()
	{
		cout << "func函数的调用" << endl;
	}
};
void test137301()
{
	Son1373 s;//由于子类没有重写父类中的纯虚函数，因此也会报错,只有在子类中重写了父类中的纯虚函数后才不会报错，可以实例化对象
	Base1373* base = new Son1373;
	base->func();
}
int main()
{
	test137301();
	system("pause");
	return 0;
}