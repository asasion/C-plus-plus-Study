#include<iostream>
using namespace std;
int main410() {
	//����������** ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
	//���磺1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	//������do...while��䣬�������3λ���е�ˮ�ɻ���
	int num = 100;
	int a = 0;//��λ����
	int b = 0;//ʮλ����
	int c = 0;//��λ����
	do{
		a = num / 100;//��ȡ��λ����
		b = ((num - a * 100) / 10);//num/10%10 ��ȡʮλ����
		c = (num-a*100-b*10);//num%10 ��ȡ��λ����
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

