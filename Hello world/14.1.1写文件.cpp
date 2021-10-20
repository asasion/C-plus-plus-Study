#include<iostream>
using namespace std;
#include<fstream>//头文件包含，文件流
/*
程序运行时产生的数据都属于临时数据，程序一旦结束运行都会被释放
通过***文件可以将数据持久化***
对文件的操作也是基于面向对象的操作
C++中对文件操作需要包含头文件<fstream>
文件类型分为两种：
1、文本文件		-	文件以文本的***ASCII码***形式存储在计算机中（可以用记事本打开）
2、二进制文件	-	文件以文本的***二进制***形式存储在计算机中，用户一般不能直接读懂它们（0101010101的形式,没有加密）
操作文件的三大类：
文件流fstream三大类
1、ofstream：写操作
2、ifstream：读操作
3、fstream ：读写操作
*/
/*
写文件的五大步骤：
1.包含头文件
#include<fstream>
2.创建流对象
ofstream ofs;					//通过ofstream，输出流类创建出对象，通过这个对象就可以进行写的操作
3.打开文件
ofs.open(“文件路径”，打开方式)//指定在哪些，和是不是以写的方式打开
4.写数据
ofs<<"写入的数据";				//利用左移运算符，写入
5.关闭文件
ofs.close();					//关闭
文件打开方式：
打开方式				解释
ios::in					i，为读文件而打开文件
ios::out				o，为写文件而打开文件
ios::ate				默认追加到文件尾，初始位置:文件尾
ios::app				append，追加方式写文件
ios::trunc				覆盖，如果文件存在先删除，再创建
ios::binary				二进制方式
注意：文件打开方式可以配合使用，利用|操作符
例如：用二进制方式写文件ios::binary|ios::out
*/
//文本文件	写文件
void test141101()
{
	//1、包含头文件	fstream
	//#include<fstream>
	//2、创建流对象
	ofstream ofs;//ofstream是一个类名，ofs是一个实例化对象，output to file stream
	//3、指定打开的方式
	ofs.open("test.md", ios::out);//文件名：“test.txt”，打开方式：写入
	//4、写内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	//5、关闭文件
	ofs.close();
}
int main1411()
{
	test141101();
	system("pause");
	return 0;
}
/*
总结：
·文件操作必须包含头文件fstream
·读文件可以利用ofstream，或者fstream类
·打开文件时候需要指定操操作文件的路径、以及打开方式
·利用<<可以向文件中写数据
·操作完毕，要关闭文件
*/