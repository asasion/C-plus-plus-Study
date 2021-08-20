#include<iostream>
using namespace std;
int main23() {
	//1、单精度 float
	//2、双精度 double
	float f1 = 3.14;//默认情况下，编辑器会把一个小数当做是双精度（double），当用float接收时，会把它转化为一个单精度。
	float f2 = 3.14f;//当在小数后面加上一个f，告诉编辑器这是一个单精度
	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	double d1 = 3.14;
	double d2 = 3.1415926;//在C++中，小数总是显示精确到小数点后第5位，如果想要查看更多的有效数字，需要额外做一些配置。
	cout << "d1=" << d1 << endl;
	cout << "d2=" << d2 << endl;
	//统计float和double占用的内存空间
	cout << "float占用的内存空间为：" << sizeof(float) << endl;//结果是4个字节
	cout << "double占用的内存空间为：" << sizeof(double) << endl;//结果是8个字节
	//科学计数法表示实数
	float f3 = 3e2;//3*10^2=200;
	cout << "f3=" << f3 << endl;
	float f4 = 3e-2;//3*10^-2=0.02
	cout << "f4=" << f4 << endl;
	return 0;
}