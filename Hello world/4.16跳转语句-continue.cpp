#include<iostream>
using namespace std;
int main416() {
	//��ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {//��������������ż�������
			continue;//��������ѭ������������һ��ѭ��
			break;//ֱ������ѭ��
		}
		cout << i << endl;
	}


	return 0;
}