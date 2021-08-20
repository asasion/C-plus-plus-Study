#include<iostream>
using namespace std;
int main47() {
	//10~9 经典
	//8~7 优秀
	//6~5 一般
	//5分以下 烂片
	
	//1、用户进行打分
	cout << "请给电影进行打分:" ;
	//2、用户进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score <<"分。"<< endl;
	//3、根据用户输入的分数来提示用户最后的结果
	switch(score){
			case 10 : cout << "该电影为经典电影。" << endl; break;
			case 9 : cout << "该电影为经典电影。" << endl; break;
			case 8 : cout << "该电影为优秀电影。" << endl; break;
			case 7 : cout << "该电影为优秀电影。" << endl; break;
			case 6 :cout << "该电影为一般电影。" << endl; break;
			/*case 5 :cout << "该电影为烂片。" << endl; break;
			case 4 :cout << "该电影为烂片。" << endl; break;
			case 3 :cout << "该电影为烂片。" << endl; break;
			case 2 :cout << "该电影为烂片。" << endl; break;
			case 1 :cout << "该电影为烂片。" << endl; break;
			case 0 :cout << "该电影为烂片。" << endl; break*/;
			default://默认输出
				cout << "该电影为烂片。" << endl; break;//break用于跳出case
	}
	//if和switch区别？
	//switch缺点，判断时候只能是整形或者字符型，不可以是一个区间
	//switch优点，结构清晰，执行效率高
	//switch中如果没有break，会继续向下执行
	return 0;
}