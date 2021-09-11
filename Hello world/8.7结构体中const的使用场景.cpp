#include<iostream>
using namespace std;
//const的作用：用const来防止误操作，限定一个只读状态，防止修改操作。
//const的使用场景
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//使用值传递相当于将结构体中的数据全部拷贝了一份给函数，当数据量巨大的时候，会影响程序的运行效率。而使用指针就只占4个字节。
//将函数中的形参改为指针，可以减少内存空间，而且不会复制一个新的副本出来。
//然而使用地址传递的隐患是，当在函数中改变结构体中的数据时，创建的结构体中的数据也会发生改变
void printStudents(const student *s)
{
	//s->age = 150;//对函数中的结构体形参加上const修饰，一旦有修改的操作就会报错，可以防止误操作
	cout << "姓名：" << s->name << "年龄：" << s->age << "得分：" << s->score << endl;
}
int main87()
{
	//创建结构体变量
	struct student s = { "张三",15,70 };
	//通过函数打印结构体变量的信息
	printStudents(&s);
	cout << "main中张三的年龄为：" << s.age << endl;
	system("pause");
	return 0;
}