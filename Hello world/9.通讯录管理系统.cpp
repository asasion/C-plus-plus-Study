#include<iostream>
#include<string>
#define MAX 100//最大人数，宏常量
using namespace std;
/*
系统需求
通讯录是一个可以记录亲人、好友信息的工具
本教程主要利用C++来实现一个通讯录管理系统
系统中需要实现的功能如下：
·添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
·显示联系人：显示通讯录中所有联系人信息
·删除联系人：按照姓名进行删除指定联系人
·查找联系人：按照姓名查看指定联系人信息
·修改联系人：按照姓名重新修改指定联系人
·清空联系人：清空通讯录中所有信息
·退出通讯录：退出当前使用的通讯录
*/
/*
1、菜单功能
功能描述：用户选择功能的界面
·封装函数显示界面 如void showMenu()
·在main函数中调用封装好的函数
*/
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
/*
3、添加联系人
功能描述：实现添加联系人功能，联系人上限为1000人，联系人信息包括（姓名、性别、年龄、联系电话、家庭住址）
添加联系人实现步骤：
·设计联系人结构体
·设计通讯录结构体
·main函数中创建通讯录
·封装添加联系人函数
·测试添加联系人功能
*/
/*
3.1设计联系人结构体
联系人信息包括：姓名、性别、年龄、联系电话、家庭住址。
*/
//设计联系人结构体
struct Person
{
	//联系人姓名
	string m_Name;
	//联系人性别：1男 2女
	int m_Sex;
	//联系人年龄
	int m_Age;
	//联系人电话，号码是字符串
	string m_Phone;
	//联系人住址
	string m_Addr;
};
/*
3.2设计通讯录结构体
设计的时候可以在通讯录结构体中，维护一个容量为1000的存放联系人的数组，
并记录当前通讯录中联系人数量
设计如下
*/

struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中人员个数
};
//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//首先应该判断通讯录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体的联系人
		//联系人姓名
		string name;
		cout << "请输入联系人姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//联系人性别
		string sex;
		cout << "请输入联系人性别：" << endl;
		cout<<"1——nan"
		cin >> sex;

		//联系人年龄
		//联系人电话
		//联系人地址
	}
}
int main()
{
	//创建通讯录的结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;//通讯录中人员个数初始化为0

	int select = 0;//创建用户选择输入的变量
	while (true)
	{
		//菜单的调用
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
			addPerson(&abs);//利用地址传递，可以修改实参
			break;
		case 2://2、显示联系人
			break;
		case 3://3、删除联系人
			break;
		case 4://4、查找联系人
			break;
		case 5://5、修改联系人
			break;
		case 6://6、清空联系人
			break;
/*
2、退出功能
功能描述：退出通讯录系统
思路：根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建
当用户选择0的时候，执行退出，选择其他不做操作，也不退出程序。
*/
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}