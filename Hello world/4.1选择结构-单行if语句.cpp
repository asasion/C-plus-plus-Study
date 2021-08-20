#include<iostream>
using namespace std;
int main41() {
	//选择结构 单行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出
	//1、用户输入分数
	int score = 0;
	cout << "请输入一个分数： ";
	cin >> score;
	//2、打印用户输入分数
	cout << "您输入的分数为： " << score << endl;
	//3、判断分数是否大于600，如果大于，那么输出
	if (score > 600) {
		cout << "恭喜您考上了一本大学！" << endl;
	}
	//if条件后面不要加分号，如果加分号，无论是否满足if的条件，都会执行{}中的内容

	return 0;
}