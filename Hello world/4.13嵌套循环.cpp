#include<iostream>
using namespace std;
int main413() {
	//用嵌套循环实现星图
	//打印一行星图
	//外层执行一次，内层执行一周
	for (int i = 1; i < 5; i++) {//外层循环
		for (int j = 1; j < 5; j++) {//内层循环
			cout << "* ";

}
		cout<<endl;
		}

	return 0;
}