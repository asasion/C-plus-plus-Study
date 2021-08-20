#include<iostream>
using namespace std;
int main410() {
	//案例描述：** 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
	//例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	//请利用do...while语句，求出所有3位数中的水仙花数
	int num = 100;
	int a = 0;//百位数字
	int b = 0;//十位数字
	int c = 0;//个位数字
	do{
		a = num / 100;//获取百位数字
		b = ((num - a * 100) / 10);//num/10%10 获取十位数字
		c = (num-a*100-b*10);//num%10 获取个位数字
		if ((a*a*a + b *b*b + c *c*c) == num) {
			cout << num << endl;
			num++;
		}
		else {
			num++;
		}
	} while (num < 1000);


	return 0;
}

