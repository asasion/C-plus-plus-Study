#include<iostream>
using namespace std;
//赋值运算符重载
/*
C++编译器至少给一个类添加4个函数
1、默认构造函数（无参，函数体为空）		没有代码
2、默认析构函数（无参，函数体为空）		没有代码
3、默认拷贝构造函数，对属性进行值拷贝
4、赋值运算符operator=，对属性进行值拷贝
*/
class Person1354 
{
public:
	Person1354(int age)
	{
		m_age = new int(age);//真实的数据开辟到堆区，堆区的数据由程序员手动开辟，也由程序员手动释放，释放是在析构函数中进行释放
	}
	~Person1354()//在析构函数中释放堆区的内存
	{
		if (m_age != NULL)
		{
			delete m_age;
//p2=p1是一次浅拷贝，拷贝的过程是将new出的堆区地址传给p2的m_age属性，在释放过程中，p1，p2分别判断并释放，就在这个过程当中，堆区的内存被释放了两次，因为第二次尝试释放时已经被释放，所以报错。
//解决方案：用一次深拷贝解决浅拷贝带来的问题，即p1，p2不再共享同一个堆区的空间存放age属性，而是各自有单独的空间并且单独进行释放。
			m_age = NULL;
		}
	}
	//重载 赋值运算符
	Person1354& operator=(Person1354& p)
	{
		//编译器是提供浅拷贝
		//m_age=p.m_age;//浅拷贝
		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);//深拷贝操作
		return *this;
	}
	int *m_age;
};
void test135401()
{
	Person1354 p1(18);
	Person1354 p2(20);
	Person1354 p3(30);
	p3 = p2 = p1;//赋值操作,连等时会报错，因为p2调用重载后没有返回自身
	cout << "p1的年龄为：" << *p1.m_age << endl;
	cout << "p2的年龄为：" << *p2.m_age << endl;
	cout << "p3的年龄为：" << *p3.m_age << endl;
}
int main1354()
{
	test135401();
	//链式思维，在C++中允许连等的操作，最终结果是10
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}
/*
总结：
为什么要进行赋值运算符重载？
因为编译器默认提供的赋值运算符重载是浅拷贝操作，
而有时候我们的数据创建在堆区，这时候就会出现堆区内存重复释放的问题
因此就需要我们自己去写一个堆区运算符重载，首先要判断原来有没有堆区内存，如果有清理掉
为实现连等赋值的操作，还要让重载函数能够返回自身。
*/