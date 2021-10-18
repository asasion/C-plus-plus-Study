#include<iostream>
using namespace std;
/*
案例描述：
制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
咖啡：	1、煮水2、冲泡咖啡3、倒入杯中4、加糖和牛奶
冲茶叶：1、煮水2、冲泡茶叶3、倒入杯中4、加柠檬
*/
class AbstractDrinking
{
public:

	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//制作咖啡
class Coffee :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};
//冲茶叶
class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入柠檬、枸杞" << endl;
	}
};
//制作函数
void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;//防止内存泄漏，释放堆区内存
}
void test137401()
{
	//制作咖啡
	doWork(new Coffee);
	cout << "----------------" << endl;
	doWork(new Tea);
	//多态，一个接口有多种形态，同一个接口传入不同的对象
	//在设计类的时候，不需要动原来的代码
}
int main1374()
{
	test137401();
	system("pause");
	return 0;
}