#include<iostream>
using namespace std;
int main24() {
	//1���ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << ch << endl;
	//2���ַ��ͱ�����ռ���ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;
	//3���ַ��ͱ�����������
	//char ch2 = "b";//��������˫���Ŵ����ַ��ͱ�����ֻ�����õ�����
	//char ch2 = 'abcdef';//�����ַ��ͱ���ʱ����������ֻ�ܰ���һ���ַ�
	//cout << ch2 << endl;
	//4���ַ��ͱ�����ӦASCII����
	cout << (int)ch << endl;//(int)�������ڽ��ַ���ǿ��ת�������Σ�97����a����Ӧ��ASCII��
	//��Ҫ��ס��ACSII��ֵ
	//a -- 97
	//A -- 65 
	return 0;
}