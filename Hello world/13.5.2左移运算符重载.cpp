#include<iostream>
using namespace std;
//左移运算符重载
//作用：可以输出自定义数据类型 例：实现直接输出对象p
class Person1352
{
	friend ostream & operator<<(ostream &cout, Person1352 &p);
public:
	Person1352(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数来重载左移运算符		p.operator<<(cout)	简化版本	p << cout
	//通常不会利用成员函数来重载左移运算符，因为无法实现cout在左侧
//	void operator<<(cout)
//	{
//		
//	}
	int m_A;
	int m_B;
};
//只能利用全局函数来重载左移运算符
//cout是标准输出流ostream的对象（数据类型），且只能有一个
ostream & operator<<(ostream& cout, Person1352& p)//本质	operator<<(cout,p)  简化为cout<< p	
{
	cout << " m_A= " << p.m_A << " m_B= " << p.m_B ;
	return cout;//out

}
void test135201()
{
	Person1352 p(10,10);
	cout << p << endl;//链式编程思想，可以无限后续，在<<执行完后，<<函数会返回一个cout因此就可以在后面追加输出
}
int main1352()
{
	test135201();
	system("pause");
	return 0;
}
//总结：重载左移运算符配合友元可以实现输出自定义数据类型