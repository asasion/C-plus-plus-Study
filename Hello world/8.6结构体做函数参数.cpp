#include<iostream>
#include<string>
using namespace std;
//作用：将结构体作为参数向函数中传递
//传递方式有两种：
//*1、值传递->形参不会改变实参
//*2、地址传递->如果实参发生改变，形参也会发生改变
//结构体做函数的参数
//将学生传入到一个参数中，打印学生的属性
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//打印学生信息的函数
//1、值传递
void printStudent1(struct student s)//值传递不会改变实参
{
	s.age = 100;
	cout << "在值传递函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score<<endl;//值传递用“.”
}
//2、地址传递
void printStudent2(struct student* p)//地址传递会改变实参
{
	p->name = "李四";
	cout << "在地址函数中打印 姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;//地址传递指针用“->”
}
//值传递与地址传递的区别
int main86()
{
	//结构体作函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息
	//创建结构体变量
	struct student s;//在结构体中创建一个s的学生变量
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);//地址传递，前面加一个取址符
	cout << "在main函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
		system("pause");
	return 0;
}