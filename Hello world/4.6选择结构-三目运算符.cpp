#include<iostream>
using namespace std;
int main46() {
	//��Ŀ�����
	//������������ a b c
	//��a��b���Ƚϣ����������ֵ��������c
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);//���ʽ1?���ʽ2�����ʽ3
	//a>b����a��a<b����b�����ֵ��c
	cout << "c=" << c << endl;
	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;//���ص���b�����Ҹ�b��ֵ100
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;





	return 0;
}