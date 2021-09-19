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
	int m_Sex=0;
	//联系人年龄
	int m_Age=0;
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
	int m_Size=0;//通讯录中人员个数
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
		cout << "请输入联系人性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) 
		{
			//如果输入的是1或者2可以退出循环，输入值为预期值，
			//如果输入有误，请重新输入
		cin >> sex;
		if (sex == 1 || sex == 2)
			{
			abs->personArray[abs->m_Size].m_Sex = sex;
			break;
			}
		cout << "输入有误，请重新输入" << endl;
		}
		//联系人年龄
		cout << "请输入联系人年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age=age;
		//联系人电话
		cout << "请输入联系人电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone=phone;
		//联系人地址
		cout << "请输入联系人家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr=address;
		//更新通讯录中的人数
		abs->m_Size++;
		cout << "添加联系人成功！" << endl;
		system("pause");//请按任意键继续
		system("cls");//系统函数，清屏操作
	}
}
/*
6、显示联系人
功能描述：显示通讯录中已有的联系人信息
显示联系人信息的实现步骤：
·封装显示联系人信息函数
·测试显示联系人信息功能
*/
/*
6.1封装显示联系人信息函数
思路：判断如果当前通讯录中没有人员，就提示记录为空，人数大于0，显示通讯录中信息
*/
//2、显示所有的联系人信息
void showPerson(Addressbooks *abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前的记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex==1?"男" :"女")<< "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
/*3、删除指定的联系人
功能描述：按照姓名进行删除指定联系人
删除联系人实现步骤：
·封装检测联系人是否存在
·封装删除联系人函数
·测试删除联系人功能
*/
/*
7.1封装检测联系人是否存在
设计思路：删除联系人前，我们需要先判断用户输入的联系人是否存在，如果存在删除，
不存在提示用户没有要删除的联系人，因此我们可以把检测人员是否存在封装成一个函数中，
如果存在，返回联系人在通讯录中的位置，不存在返回-1
*/
//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1。
int isExist(Addressbooks *abs,string name)//参数1：传入通讯录 参数2：对比名称
{
	for (int i = 0; i < abs->m_Size; i++)//为什么要abs->m_Size-1？？
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//找到了，返回这个人在数组中的下标编号
		}	
	}
	return -1;//如果没有找到返回一个-1,注意return -1的位置，不要放在for循环的括号里面
}
/*
7.2封装删除联系人函数
根据用户输入的联系人判断该通讯录中是否有此人
查找到进行删除，并提示删除成功
查找不到提示查无此人
*/
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs, name);//ret==-1，查无此人。ret!=-1,查到此人。
	if (ret != -1)
	{
		//查到此人，进行删除的操作
		for (int i = ret; i < abs->m_Size; i++)//将数组中的数据前移，覆盖掉需要删除掉的数据
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i+1];
		}
		abs->m_Size--;//更新通讯录中的人员数
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}
//4、查找指定联系人
void findPerson(Addressbooks *abs)
{
	cout << "请输入要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs,name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << "\t"<<endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//修改指定的联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入要修改的联系人名字：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入修改姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "请输入修改性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入。" << endl;
		}
		//年龄
		cout << "请输入修改年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//联系电话
		cout << "请输入修改联系电话：" << endl;
		string phoneNumber = " ";
		cin >> phoneNumber;
		abs->personArray[ret].m_Phone = phoneNumber;
		//家庭住址
		cout << "请输入修改家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//6、清空联系人
//实现思路：将通讯录中所有联系人信息清除掉，只要将通讯录记录的联系人数量置为0，做逻辑清空即可。不需要将所有的联系人信息覆盖掉
void cleanPerson(Addressbooks *abs)
{
	cout << "是否确定清空通讯录？" << endl;
	cout << "1——是" << "  2——不是" << endl;
	while (true)
	{
		int a;
		cin >> a;
		if (a == 1 || a == 2)
		{
			if (a == 1)
			{
				abs->m_Size = 0;//将当前记录联系人数量置为0，做逻辑清空操作
				cout << "通讯录已清空" << endl;
				break;
			}
			else
			{
				break;
			}
		}
		cout << "输入有误，请重新输入。" << endl;
	}
	system("pause");
	system("cls");
}
int main9()
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
			showPerson(&abs);
			break;
		case 3://3、删除联系人,如果case在break之前的代码很长就会报错
		/*{
			cout << "请输入删除的联系人的姓名：" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人。" << endl;
			}
			else
			{
				cout << "找到此人。" << endl;
			}
		}*/
			deletePerson(&abs);
			break;

		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5://5、修改联系人
			modifyPerson(&abs);
			break;
		case 6://6、清空联系人
			cleanPerson(&abs);
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
			cout << "输入有误，请重新输入。" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}