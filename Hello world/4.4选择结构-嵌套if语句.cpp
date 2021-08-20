#include<iostream>
using namespace std;
int main44() {
		/*
		-提示用户输入一个高考考试分数，根据分数做如下判断
		-分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
		-在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。*/
	//1、提示用户输入高考分数.
	int score = 0;
	cout << "请输入高考分数：";
	cin >> score;
	//2、打印分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断

	//如果分数大于600 一本
	if (score > 600) {
		cout<<"恭喜您考上一本！"<<endl;
		//大于700 北大
		if (score > 700) {
			cout << "恭喜您考入北大！" << endl;
		}
		//大于650 清华
		else if (score > 650) {
			cout << "恭喜您考入清华！" << endl;
		}
		//大于600 人大
		else if (score > 600) {
			cout << "恭喜您考入人大！" << endl;
		}
	}
		
	//如果分数大于500 二本
	else if (score > 500) {
		cout << "恭喜您上二本！" << endl;
	}
	//如果分数大于400 三本
	else if (score > 400) {
		cout << "恭喜您考上三本！" << endl;
	}
	//其余未考上
	else {
		cout << "很遗憾 您未考上大学。" << endl;
	}
	return 0;
}