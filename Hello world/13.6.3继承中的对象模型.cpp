#include<iostream>
using namespace std;
//继承中的对象模型
//问题：从父类继承过来的成员，哪些属于子类对象中？
//从父类继承过来的成员属不属于子类？
class Base1363
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//在继承过程中，私有成员只是被隐藏了，但是还是会被继承下去
};
class Son :public Base1363
{
public:
	int m_D;
};
void test136301()
{
	//可能答案：4 12 16,正确答案：16
	//原因：m_A、m_B、m_C、m_D四个成员都在子类Son中
	//无论父类中什么成员，都会在子类中继承保留一份
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有的成员属性是被编译器隐藏了，因此访问不到，但是确实是被继承下来了
	cout << "size of Son=" << sizeof(Son) << endl;
}
int main()
{
	test136301();
	system("pause");
	return 0;
}
//使用Developer Command Prompt for VS 2019（开发人员命令提示工具查看对象模型）
//1、跳转盘符 D:
//2、跳转文件路径 cd 具体的路径下（右击.cpp的标题打开文件所在位置，复制.cpp的文件路径）
//3、查看命令
//c1 /d1 reportSingleClassLayout类名 文件名（按tab键自动补齐）
//		 报告单个类的布局
//结论：父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到