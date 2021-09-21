#include<iostream>
using namespace std;
/*
C++中利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 delete
语法： new 数据类型
利用new创建的数据，会返回该数据对应的类型的指针
*/
//1、new的基本语法
int* func()
{
	//在堆区创建一个整形数据
	//new返回的是一个该数据类型的指针
	int* p = new int(10);//new一个什么样的数据类型就用什么样的指针去接收它，new释放一个地址，需要用指针去接收它
	return p;
}

void test1013_01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//如果不释放该数据，就会一直保留。堆区的数据由程序员开辟管理释放
	//利用delete关键字释放
	delete p;
	//cout << *p << endl;//此时内存已经被释放，无法继续运行读取数据
 }
//2、在堆区利用new开辟数组
void test1013_02()
{
	//在堆区创建10个整形数据的数组
	int* arr = new int[10];//创建一个有10个元素的数组，new返回数组内存空间的首地址
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给十个元素赋值 1~109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[]arr;//delete后加一个中括号，告诉编译器我释放的是一个指针，否则会释放错误。
}
int main1013()
{
	test1013_01();
	test1013_02();
	system("pause");
	return 0;
}