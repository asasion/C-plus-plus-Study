#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
以二进制的方式对文件进行读写操作
打开方式指定为***ios::binary***
*/
//二进制 写文件
/*
二进制方式写文件主要利用流对象调用成员函数write
函数原型：ostream& write(const char * buffer,int len)
参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
*/
//当用二进制的方式对文件进行操作的时候，写入的内容读出来可能会出现乱码的情况，但是不必担心，只要能读出来就行
//不仅可以写入编译器自带的数据类型，也可以写入自定义的数据类型

class Person1421
{
public:
	char m_Name[64];//在写字符数组的时候，尽量不要用string，因为string本质是一个类，最好使用char字符数组
	int m_Age;
};
void test142101()
{
	//1、包含头文件
	//2、创建流对象
	ofstream ofs;
	//3、打开文件
	ofs.open("person.txt", ios::out | ios::binary);//ofs.open(文件名,写操作|二进制)
	//4、写文件
	Person1421 p = { "张三",18 };
	ofs.write((const char* )& p, sizeof(Person1421));//write((强转为const char *)&p,数据占用的内存）
	//5、关闭文件
	ofs.close();
}
int main1421()
{
	test142101();
	system("pause");
	return 0;
}
//总结：文件输出流对象可以通过write函数，以二进制方式写数据