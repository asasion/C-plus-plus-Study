#include<iostream>
using namespace std;
//��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7��.
//���߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
int main412() {
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 7) {
			cout << "�����ӣ���λ��7:" << i << endl;
		}
		else if (i / 10 % 10 == 7) {
			cout << "�����ӣ�ʮλ��7:" << i << endl;
		}
		else if (i % 7 == 0) {
			cout << "������,��7�ı���:" << i << endl;
		}
		else {
			cout << i << endl;
		}
	}


	return 0;
}