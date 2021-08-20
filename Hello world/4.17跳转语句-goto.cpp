#include<iostream>
using namespace std;
int main417() {
	//不建议经常使用
	//跳转到标记位置继续运行
	//通常标记大写
	cout << "1.xxxxx" << endl;
	cout << "2.xxxxx" << endl;
	goto FLAG;
	cout << "3.xxxxx" << endl;

	cout << "4.xxxxx" << endl;

	FLAG://后结冒号
	cout << "5.xxxxx" << endl;

	cout << "6.xxxxx" << endl;
	return 0;
}