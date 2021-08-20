#include<iostream>
using namespace std;
int main416() {
	//在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {//如果是奇数输出，偶数不输出
			continue;//结束本次循环，并进入下一次循环
			break;//直接跳出循环
		}
		cout << i << endl;
	}


	return 0;
}