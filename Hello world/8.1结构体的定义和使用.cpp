#include<iostream>
#include<string>//包含string的头文件后才可以被访问
using namespace std;
//结构体概念：结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
//已学过的数据类型有：整形，浮点型，字符型，布尔型，字符串型
//使用结构体就可以自定义一个数据类型
//语法：struct 结构体名{结构体成员列表};
//C++中在创建结构体时“struct”关键字可以省略，但是在结构体1定义时struct关键字不可以被省略
//通过结构体创建变量的方式有三种：
//1、struct 结构体名 变量名
//2、struct 结构体名 变量名 ={成员1值，成员2值...}
//3、定义结构体时顺便创建变量

//步骤
//1、创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义的数据类型其实就是内置的数据类型的集合
//语法： struct 类型名称{成员列表}
 struct Student
 {
 //成员列表
	 //姓名
	 string name;
	 //年龄
	 int age=0;
	 //分数
	 int score=0;
 }s3;//第三种方法


int main81()
{
//2、通过学生类型创建具体的学生

 //2.1 struct 结构体名 变量名
 //struct Student s1;
	struct Student s1;
	//给s1的属性赋值，通过“.”访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score<<endl;

//2.2 struct 结构体名 变量名 ={成员1值，成员2值...}
//struct Student s2 = {...}
	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score<<endl;

//2.3 定义结构体时顺便创建变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
	system("pause");
	return 0;
}
//总结
//1、定义结构体时的关键字是struct，不可省略
//2、创建结构体变量时，关键字strcut可以省略
//3、结构体变量利用操作符“.”访问成员