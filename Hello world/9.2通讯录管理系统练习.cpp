#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
/*
通讯录是一个可以记录亲人、好友信息的工具。
本教程主要利用C++来实现一个通讯录管理系统
系统中需要实现的功能如下：
•添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
•显示联系人：显示通讯录中所有联系人信息
•删除联系人：按照姓名进行删除指定联系人
•查找联系人：按照姓名查看指定联系人信息
•修改联系人：按照姓名重新修改指定联系人
•清空联系人：清空通讯录中所有信息
•退出通讯录：退出当前使用的通讯录
*/
//1.菜单功能
void showMenu92()
{
	cout << "***********************" << endl;
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;
	cout << "*****3、删除联系人*****" << endl;
	cout << "*****4、查找联系人*****" << endl;
	cout << "*****5、修改联系人*****" << endl;
	cout << "*****6、清空联系人*****" << endl;
	cout << "*****0、退出通讯录*****" << endl;
	cout << "***********************" << endl;
	cout << "***********************" << endl;
}
//0、退出功能(见主函数case:0)
/*
1、添加联系人
怎么添加？
首先要有结构体
1、设计联系人结构体 person ，用于存放联系人的信息（姓名、性别、年龄、联系电话、家庭住址）
2、设计通讯录结构体 Addressbooks，保存联系人的数组personArrayp[]，最多存放的联系人的数目Size
3、在main函数中创建通讯录
*/
struct person//个人信息结构体
{
	string name;
	int sex=0;
	int age=0;
	string phone;
	string addr;
};
struct addressbooks//通讯录结构体，结构体嵌套
{
	struct person personArray[MAX];
	int Size;//记录当前通讯录中的人数
};
//void addPerson(Addressbooks* abs)
//{
//	cout << "请输入联系人的名字：" << endl;
//	string name;
//	cin >> name;
//	abs.personArray->name = name;
//	cout << "请输入联系人的性别：" << endl;
//	cout << "1——男，2——女" << endl;
//	int sex;
//	while (true)
//	{
//		cin >> sex;
//		if (sex == 1 || sex == 2)
//		{
//			abs.personArray->sex = sex;
//			break;
//		}
//		cout << "输入错误，请重新输入。" << endl;
//	}
//	cout << "请输入联系人的年龄：" << endl;
//	int age;
//	cin >> age;
//	abs.personArray->age = age;
//	cout << "请输入联系人的联系电话：" << endl;
//	string phone;
//	cin >> phone;
//	abs.personArray->phone = phone;
//	cout << "请输入联系人的地址：" << endl;
//	string addr;
//	abs.personArray->addr = addr;
//	abs->Size++;
//}


//int main92()
//{
//	int select = 0;//select代表用户输入的选择
//	showMenu92();
//	while (true)
//	{
//		addressbooks abs;//通讯录结构体变量
//		select = 0;
//		cin >> select;
//		switch (select)
//		{
//		case 0://退出怎么搞？？？
//			cout << "欢迎下次使用！" << endl;
//			system("pause");
//			return 0;//函数返回值执行后代表函数即将退出
//				break;
//		case 1:
//			
//		}
//
//	}
//	system("pause");
//	return 0;
//}
/*
总结：
1、变量的名称有考究
2、函数执行return命令后，就会退出函数
3、结构体概念不熟
*/