#include<iostream>
using namespace std;
int main43() {
	//选择结构 - 多条件语句
	//输入一个考试的分数，如果大于600分，视为考上一本大学，在屏幕输出
	//大于500，视为考上二本大学，屏幕输出
	//大于400，视为考上三本大学，屏幕输出
	//小于等于400分，视为未考上本科，屏幕上输出
	//1、用户输入分数
	int score = 0;
	cout << "请输入考试分数：";
	cin >> score;


	//2、提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断
	//如果大于600，考上一本
	if (score > 600) {
		cout << "恭喜您考上一本！"<<endl;
	}
	//如果大于500，考上二本
	
		else if (score > 500) {
			cout << "恭喜您考上二本！" << endl;
		}
			//如果大于400，考上三本
		else if (score > 400) {
				cout << "恭喜您考上三本！" << endl;
			}
			else {
				cout << "很遗憾，您未考上大学。" << endl;
			}


	return 0;
}