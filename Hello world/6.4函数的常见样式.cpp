#include<iostream>
using namespace std;
//常见的函数样式4种
//1、无参无返
void test01()
{
	cout << "This is test01:无参无返" << endl;
}

//2、有参无返
void test02(int a)
{
	cout << "This is test02:有参无返，参数值为：" << a << endl;
}

//3、无参有返
int test03()
{
	cout << "This is test03:无参有返，返回值为：" ;
	return 2021;
}
//4、有参有反
int test04(int b)
{
	cout << "This is test04:有参有反，参数值为：" << b << ",返回值为：";
	return 2024;
}
int main64()
{
	test01();
	test02(2020);
	cout<<test03()<<endl;
	cout << test04 (2023)<< endl;
	system("pause");
	return 0;
}