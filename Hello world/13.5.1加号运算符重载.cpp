#include<iostream>
using namespace std;
//运算符重载的概念:对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型。
//加号运算符重载
//作用：实现两个自定义数据类型的相加运算，例如两个Person的实例化的属性分别相加
/*
对于内置的数据类型，编译器知道如何进行运算
对于类的实例属性相加则可以通过自己写成员函数，实现两个对象相加属性后返回新的对象 return
*/
class Person1351
{
public:
	int m_A;
	int m_B;
	//Person1351 operator+(Person1351& p)//***1、通过成员函数重载加号***
	//{
	//	Person1351 temp;
	//	temp.m_A = this->m_A + p.m_A;//为什么是this指针，this指向类中的成员变量，谁调用谁就是this
	//	temp.m_B = this->m_A + p.m_B;
	//	return temp;//返回的是Person类型的值
	//}
};
Person1351 operator+(Person1351& p1, Person1351& p2)//***2、通过全局函数重载加号***
{
	Person1351 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
Person1351 operator+(Person1351& p1, int num)//函数运算符重载operator+，也可以发生重载
{
	Person1351 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
int main()
{
	Person1351 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1351 p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person1351 p3;
	//p3 = p1.operator+(p2);//当使用编译器提供的operator+之后，就可以简化为：p3=p1+p2;			  
	//cout << "p3.m_A=" << p3.m_A << endl;
	//cout << "p3.m_B=" << p3.m_B << endl;
	p3 = p1+p2;//当然也可以写作：p3=p1.operator+(p2);
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	//运算符重载，也可以发生函数重载
	p3 = p1 + 133;//Person数据类型+int数据类型
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	system("pause");
	return 0;
}
/*
总结：
·不可以同时使用两种函数进行重载
·在使用全局函数operator+进行重载时，operator+不是类的成员函数，因此无法通过实例化的属性进行调用
两种重载运算符函数使用时的区别：
·成员函数重载本质：Person p3=p1.operator+(p2);
·全局函数重载本质：Person p3=oprator(p1,p2);
·运算符重载函数也可以发生重载
·***对于内置的数据类型的表达式的运算符是不可能改变的
·***不要滥用运算符重载：不要把加减乘除混合
*/
