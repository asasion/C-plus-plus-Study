#include<iostream>
using namespace std;
/*
struct和class的区别
在C++中struct和class的唯一区别就在于默认的访问权限不同
唯一区别：
·struct	默认权限为公共（public）
·class		默认权限为私有（private）
*/
class C1
{
	int m_A;//默认权限	私有
};
struct C2
{
	int m_A;//默认权限	公共
};
int main1314()
{
	//C1 c1;
	//c1.m_A = 100;//类	默认权限为私有，不可以被访问
	C2 c2;
	c2.m_A = 100;//结构体	默认权限为公共，可以被访问
	system("pause");
	return 0;
}