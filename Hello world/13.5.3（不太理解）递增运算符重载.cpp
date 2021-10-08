#include<iostream>
using namespace std;
//递增运算符重载	++
//作用：通过重载递增运算符，实现自己的整型数据
//前置递增 ++a，先进行自增运算再表达变量a
//后置递增 a++，先表达变量a再进行自增运算
//自定义的整形变量
class MyInteger1353
{
	friend ostream& operator<<(ostream& cout, MyInteger1353& MyInterger);
public:
	MyInteger1353()
	{
		m_Num = 0;
	}
	//重载前置++运算符
	MyInteger1353& operator++()
	{
		//先进行++的运算，在将自身做一个返回
		m_Num++;
		return *this;//为什么不进行值返回而是要用引用返回？？？，因为返回值的话始终是在对同一个值进行操作，当出现++(++a)的情况时，始终是a的自增
	}
	//重载后置++运算符
	MyInteger1353 operator++(int)//返回值不是区分函数重载的条件，所以要在括号内加一个int ，int代表一个占位参数 用于区分前置和后置递增，且这里只能是int 不可以是double float
	{
		//不可以先return，return代表着函数结束运行
		//先 返记录当时的结果
		MyInteger1353 temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果返回
		return temp;//后置返回值，前置返回引用。如果后置返回引用，因为是局部引用
	}
private:
	int m_Num;
};
ostream &operator<<(ostream &cout,MyInteger1353 &MyInterger1353)//***为什么声明函数类型后加一个&？？申明返回值是一个引用
{
	cout << MyInterger1353.m_Num;
	return cout;
}
void test135301()
{
	MyInteger1353 myint;
	cout << ++myint << endl;
}
void test135302()
{
	MyInteger1353 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test135301();
	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;
	test135302();
	system("pause");
	return 0;
}
//C++不支持链式的后置递增
//前置递增返回引用，后置递增返回值