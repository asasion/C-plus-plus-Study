#include<iostream>
#include<ctime>//time系统时间头文件包含
using namespace std;
int main49() {
	// 案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，
	//如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
	//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次的随机数都一样
	srand((unsigned int)time(NULL));
	//1、生成随机数
	int num=rand() % 100 + 1;//%代表生成区间，例：rand()%100指生成0~99的随机数，+1就能生成1~100的随机数
	//伪随机数，总是42
	//cout << num;
	//2、玩家进行猜测
	int val = 0;//代表玩家输入的数字
	while (num != val) {
		cout << "请输入一个1~100的整形数字：";
		cin >> val;
		//3、判断玩家的猜测与随机数大小
		if (val<100&&val> num) {
			cout << "您猜测的数字过大。"<<endl;

		}
		else if (val>0&&val < num) {
			cout << "您猜测的数字过小"<<endl;
		}
	}
	//4、猜对，第六步
	//5、猜错、打印猜测结果（猜大了或猜小了）并返回第三步
	//6、猜对后，游戏结束，恭喜玩家
	cout << "恭喜您，猜测结果正确！" << endl;



	return 0;
}