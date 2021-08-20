#include<iostream>
using namespace std;
int main45() {
	int a = 0;
	int b = 0;
	int c = 0;
	//提示用户输入三只小猪的体重
	cout << "请输入小猪a的体重：";
	cin >> a;
	cout << "请输入小猪b的体重：";
	cin >> b;
	cout << "请输入小猪c的体重：";
	cin >> c;
	//打印三只小猪的体重
	cout << "小猪a的体重为：" << a << endl;
	cout << "小猪b的体重为：" << b << endl;
	cout << "小猪c的体重为：" << c << endl;
	//将三只小猪的体重进行比较
	//先判断a和b的重量
	if (a > b) {//a比b重
		if (a > c) {//a比c重
			cout << "小猪a的体重最重：" << a << endl;
		}
		else if (b > a) {//b比a重
			if (b > c) {
				cout << "小猪b的体重最重:" << b << endl;
			}
	}
	}
	else {
		cout << "小猪c的体重最重：" << c << endl;
	}
	return 0;
}