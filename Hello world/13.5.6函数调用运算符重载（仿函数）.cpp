#include<iostream>
using namespace std;
/*
���������������()Ҳ��������
���������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
���º���û�й̶�д�����ǳ����
*/
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}
void test135601()
{
	MyPrint myPrint;
	myPrint("Hello World");//����ʹ�������糡�����ں������ã���˳�Ϊ�º���
	MyPrint02("Hello World");
}
//�º����ǳ���û��һ���̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test135602()
{
	MyAdd myadd;
	int result=myadd(100, 100);
	cout << result << endl;
	//������������
	cout <<MyAdd()(100, 100) << endl;//MyAdd��һ�������������󣬺���ĵڶ�������ʹ�õ���С���ŵ����ء��ص㣺��ǰ��ִ����ɺ��������ͷš�һ�����ͼ�һ��С���ţ���һ��Ӧ��һ����������
}
int main()
{
	//test135601();
	test135602();
	system("pause");
	return 0;
}