#include<iostream>
using namespace std;

class Animal137102
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
//猫类
class Cat137102 :public Animal137102
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
//狗类
class Dog137102 :public Animal137102
{
public:
	 void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
void doSpeak(Animal137102& Animal137102)
{
	Animal137102.speak();
}
void test13710201()
{
	Cat137102 cat;
	doSpeak(cat);
	Dog137102 dog;
	doSpeak(dog);
}
void test13710202()
{
	cout << "sizeof Animal=" << sizeof(Animal137102) << endl;//执行结果：1，是空类所占的大小1，因为此时Animal类中此时只有一个非静态的成员函数，不属于类的对象上，是分开存储的
	//当在父类中加上virtual关键字后，sizeof(Animal137102)变为4，说明类的内部结构发生了改变，类内多了一个虚函数表指针vfptr（注意与vbptr的区别）
	//vfptr（虚函数（表）指针） v-virtual、f-function、ptr-pointer指向一个虚函数表vftable v-virtual、f-function、table
	//虚函数表内会记录一个虚函数的地址 &Animal::speak
}
int main13712()
{
	//test13710201();
	test13710202();
	system("pause");
	return 0;
}