#include<iostream>
#include<string>
using namespace std;
int main26() {
	//1��C�����ַ���
	char str1[] = "hello world1";//ע�����1���ַ���������Ҫ�������ţ��봴���ַ�������2���Ⱥź���Ҫ��˫���ţ����ַ���������ȥ�����������ڵ����ַ�
	//char str1[] = 'hello world';//���������ڵ����ַ�ʱ
	cout << "hello world2" << endl;
	cout << str1 << endl;
	//2��C++�����ַ���
	string str2 = "hello world3";//string������������,��Ҫͷ�ļ���<string>������ʱ��vs���Զ�����ͷ�ļ���
	cout << str2 << endl;
	return 0;
}