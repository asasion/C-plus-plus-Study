#include<iostream>
using namespace std;
int main45() {
	int a = 0;
	int b = 0;
	int c = 0;
	//��ʾ�û�������ֻС�������
	cout << "������С��a�����أ�";
	cin >> a;
	cout << "������С��b�����أ�";
	cin >> b;
	cout << "������С��c�����أ�";
	cin >> c;
	//��ӡ��ֻС�������
	cout << "С��a������Ϊ��" << a << endl;
	cout << "С��b������Ϊ��" << b << endl;
	cout << "С��c������Ϊ��" << c << endl;
	//����ֻС������ؽ��бȽ�
	//���ж�a��b������
	if (a > b) {//a��b��
		if (a > c) {//a��c��
			cout << "С��a���������أ�" << a << endl;
		}
		else if (b > a) {//b��a��
			if (b > c) {
				cout << "С��b����������:" << b << endl;
			}
	}
	}
	else {
		cout << "С��c���������أ�" << c << endl;
	}
	return 0;
}