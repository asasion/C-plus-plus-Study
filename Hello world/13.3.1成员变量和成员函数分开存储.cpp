#include<iostream>
using namespace std;
/*
*成员变量和成员函数是分开存储的
在C++中，类内的成员变量和成员函数分开存储
只有非静态成员才属于类的对象上
*/
class Person13210
{
	int m_A;//非静态成员变量
	static int m_B;//静态成员变量，记得静态成员变量需要在类外进行初始化操作
	void func() {}//非静态成员函数	
	static void func2(){}//静态成员函数	
};
int m_B = 10;//静态成员变量在类外进行初始化操作
void test1321001()
{
	Person13210 p;
	cout << "size of p =" << sizeof(p) << endl;//一个空对象中的类所占的内存空间是多少？？？  空对象结果是1个字节
	//原因：C++编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占内存的位置。每一个对象都应该有独一无二的内存空间
}
void test1321002()
{
	Person13210 p1;
	cout << "size of p1 =" << sizeof(p1) << endl;//结果：4，非静态成员变量是属于类的对象，计算了m_A所占的内存空间大小
}
int main1331()
{
	//test1321001();//			  空对象的结果是：1		原因：每一个对象都有独一无二的内存空间
	test1321002();	//	  类中的整形变量的结果是：4
					//    静态成员变量的结果依旧是：4	原因：静态成员变量是所有类共享的，不属于某一个具体的类。
					//非静态成员函数的结果依旧是：4		原因：非静态成员函数也是不属于类的对象上。，只有一份数据，由所有的对象共享
					//  静态成员函数的结果仍然是：4		原因：静态成员函数不属于类的对象
					//	总结：只有非静态成员变量属于类的对象上，其余的都不属于类的对象上。
	system("pause");
	return 0;
}