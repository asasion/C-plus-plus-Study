#include<iostream>
using namespace std;
#include<string>
//虚析构和纯虚析构
/*
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码,容易造成内存泄漏
内存泄漏：（程序中已动态分配的堆内存由于某种原因程序未释放或无法释放，造成系统内存的浪费，导致程序运行速度减慢甚至系统崩溃等严重后果。）
解决方法：将父类中的析构函数改为***虚析构***或者***纯虚析构***
虚析构和纯虚析构的共性：
·可以解决父类指针释放子类对象
·都需要有具体的函数实现
虚析构和纯虚析构的区别：
·如果是***纯虚析构***（如果是虚析构则不受影响），该类属于抽象类，无法实例化对象
虚析构语法：
virtual ~类名(){}
纯虚析构语法：
virtual ~类名()=0;
类名






*/
class Animal1375
{
public:
	Animal1375()
	{
		cout << "Animal的构造函数调用" << endl;
	}
	virtual void speak() = 0;//由于父类是一个抽象类，调用不到speak函数中的具体代码，因此将其变为纯虚函数
	//virtual ~Animal1375()//利用虚析构可以解决	父类指针释放子类对象时不干净的问题	*注意是在父类中的析构函数前加virtual而不是子类的析构函数*
	//{
	//	cout << "Animal的析构函数调用" << endl;
	//}
	//纯虚函数声明
	//纯虚析构需要声明也需要具体实现，与纯虚函数不同
	//只要有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal1375() = 0;//纯虚析构，在析构时虚析构和纯虚析构只能有一个,也能够解决子类对象释放不干净的问题
	//无论是虚析构还是纯虚析构都必须有具体的代码实现
};
Animal1375::~Animal1375()//纯虚函数定义具体实现
{
	cout << "Animal的纯虚析构函数" << endl;
}
class Cat1375:public Animal1375//Cat子类继承抽象父类Animal，必须重写父类，否则子类也是一个抽象类
{
public:
	Cat1375(string name)//猫的构造函数中传入一个名字
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);//new创建在堆区,m_Name是一个指针，应该在Cat的析构函数中把它自身的姓名释放掉
	}
	virtual void speak()
	{
		cout <<*m_Name<< "小猫在说话" << endl;//解引用
	}
	 ~Cat1375()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;//将m_Name置为空
		}
	}
	//给猫去一个名字,不是直接创建在栈上而是通过指针指向创建在堆区数据，用指针去维护它
	string *m_Name;
};
void test137501()
{
	Animal1375* animal = new Cat1375("Tom");//用父类的指针指向子类的对象,为什么Cat可以传入，和构造函数的关系
	animal->speak();//用父类的指针animal调用子类的speak函数
	//父类的指针在析构的时候不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏（因为是用父类中的指针去维护子类在堆区中的数据，因此就不会调用子类中的析构函数）
	//解决办法：将子类中的析构函数改为虚析构函数
	delete animal;
}
int main1375()
{
	test137501();//运行结果：最后Cat的析构函数没有被调用，堆区的数据没有释放干净，导致了内存泄漏
	system("pause");
	return 0;
}
//纯虚函数使用的必要条件：
//在子类中有些数据被开辟到了堆区，当用抽象父类的指针维护子类在堆区的属性时，由于指针是父类的无法直接释放堆区中子类创建的属性，此时就需要使用父类对象的纯虚函数来释放子类在堆区中的属性
/*
总结：
1、虚析构或纯虚析构就是用来解决通过父类指针无法释放子类对象的问题
2、如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
3、拥有纯虚析构函数的类也属于抽象类
*/