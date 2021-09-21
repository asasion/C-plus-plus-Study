#include<iostream>
#include<string>
using namespace std;
//作用：结构体中的成员可以是另一个结构体
//例如：每一个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//定义学生结构体
struct student
{
	string name;//姓名
	int age=0;//年龄
	int score=0;//分数
};
//结构体嵌套结构体
struct teacher
{
	int ID;
	string name;
	int age=0;
	struct student stu;//辅导的学生，学生结构体定义在主函数外
};
int main85()
{
	//创建老师
	teacher t;
	t.ID = 10000;
	t.name = "老王";
	t.age = 60;
	t.stu.name = "小王";
	t.stu.score = 60;
	t.stu.age = 20;
	cout << "老师的姓名：" << t.name << "老师编号：" << t.ID << "老师年龄：" << t.age << "老师辅导的学生姓名：" << t.stu.name
		<< "学生的年龄：" << t.stu.age << "学生的分数：" << t.stu.score << endl;
		
	system("pause");
	return 0;
}