#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*
读文件与写文件的步骤相似，但是读取方式相对于比较多
读文件步骤如下：
1、包含头文件
#include<fstream>
2、创建流对象
ifstream ifs;
3、打开文件并判断文件是否打开成功
ifs.open("文件路径",打开方式);
4、读数据
四种方式读取
5、关闭文件
ifs.close();
*/
int main1412()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;
	//3、打开文件	并且判断是否打开成功
	ifs.open("test.txt", ios::in);
		if (!ifs.is_open())//ifs.is_open用于判断是否打开，返回一个布尔的数据类型,!表示取反
		{
			cout << "文件打开失败" << endl;//文件打开失败的原因：1、文件名写错2、文件的路径写错
		}
	//4、读数据
	////第一种
	//	char buf[1024] = { 0 };//定义一个字符数组，并且均赋值为0
	//	while (ifs >> buf)//ifs>>buf当数据全部读取完成后，会返回false，while退出循环
	//	{
	//		cout << buf << endl;
	//	}
	////第二种
	//	char buf[1024] = { 0 };
	//	while (ifs.getline( buf, 1024))//ifs.getline(char*,读取的位数)
	//	{
	//		cout << buf << endl;
	//	}
	// 第三种
		string buf;//将所有的数据放到字符串中
		while (getline(ifs, buf))//全局函数getline(basic_istream输出流,char *放置的字符串)
		{
			cout << buf << endl;
		}
	//第四种	不推荐用
		//把文件中的所有数据按字符一个一个都读出来
		char c;
		while ((c=ifs.get())!=EOF)//get函数一次只读一个字符,EOF指文件尾End of File
		{
			cout << c;
		}
	//5、关闭文件
		ifs.close();//关闭文件
	system("pause");
	return 0;
}
/*
总结：
·读文件可以利用ifstream（可读可写），或者fstream类
·利用is_open函数可以判断文件是否打开成功
·close关闭文件
*/
