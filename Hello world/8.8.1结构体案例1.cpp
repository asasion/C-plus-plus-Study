#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//案例描述：
/*
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师及学生所带的学生赋值
最终打印出老师的数据以及老师所带的学生的数据。
*/
struct Student//学生结构体的定义
{
	string sName;//学生的姓名
	int score=0;//学生的分数
};
struct Teacher//老师的结构体定义
{
	
	string tName;//老师姓名
	struct Student sArray[5];//学生数组

};
//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len)//给老师的信息开辟空间并赋值的操作
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teahcer_";
			tArray[i].tName += nameSeed[i];
			//通过循环给每名老师所带的学生赋值
			for (int j = 0; j < 5; j++) {
				tArray[i].sArray[j].sName = "Student_";
				tArray[i].sArray[j].sName += nameSeed[j];
				int random = rand() % 61+40;//0~59分+40，40~100分中间的随机数
				tArray[i].sArray[j].score = random;
			}
			
	}

}
//打印所有信息
void printInfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName;
			cout << " 学生得分：" << tArray[i].sArray[j].score << endl;
		}

	}
}
int main()
{
	//随机数种子，按照系统当前的时间产生的随机数
	srand((unsigned int)time(NULL));
	//1、创建3名老师的数组
	struct Teacher tArray[3];
	//2、通过函数给3名老师的信息赋值，并且给老师带的学生的信息也赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3、打印所有老师及所带学生的信息
	printInfo(tArray,len);
	system("pause");
	return 0;
}