#include<iostream>
#include<string>
using namespace std;
//结构体指针
//作用：通过指针访问结构体中的成员
//利用操作符“->”可以通过结构体指针访问结构体属性
//定义学生结构体
struct Student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
int main84()
{
	//1、创建学生结构体变量
	struct Student s = { "张三",18,100 };
	//2、通过指针指向结构体变量
	//int* p = &s;不可行，因为如果对s取地址，返回的是student的数据类型,而不是int类型的数据
	struct Student* p = &s;//此处的struct可以省略
	//3、通过指针访问结构体变量中的数据
	p->age;//指针通过箭头访问结构体中的变量
	cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score<<endl;
	system("pause");
	return 0;
}
//总结：结构体指针可以通过“->”操作符来访问结构体中的成员