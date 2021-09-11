#include<iostream>
#include<string>
using namespace std;
/*案例描述：
设计一个英雄结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/
//1、设计英雄的结构体
struct Hero
{
	string name;//英雄的姓名
	int age;//英雄的年龄
	string gender;//英雄的性别
};
//冒泡排序 实现年龄的升序排列
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j下标的元素年龄大于j+1元素的年龄，就交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
};
//打印排序后的数组信息
void print(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "英雄姓名：" << heroArray[i].name << " 英雄年龄：" << heroArray[i].age << " 英雄性别：" << heroArray[i].gender << endl;
	}
};
int main882()
{
//2、创建一个数组，存放五名英雄
	struct Hero heroArray[5] =
	{
		 {"刘备",23,"男"},
		 {"关羽",22,"男"},
		 {"张飞",20,"男"},
		 {"赵云",21,"男"},
		 {"貂蝉",19,"女"},
	};
	
	//3、对数组进行排序，按照年龄进行升序排列
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印：" << endl;
	print(heroArray, len);
	bubbleSort(heroArray,len);
	//4、将排序后的结果打印输出
	cout << "排序后打印：" << endl;
	   print(heroArray, len);
	system("pause");
	return 0;
}