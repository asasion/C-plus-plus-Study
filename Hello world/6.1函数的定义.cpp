#include<iostream>
using namespace std;
//ע�ⲻҪ��add����д��main��������
//����ĺ���Ҫд��main����֮ǰ����Ȼ�ᱨ���Ҳ�����ʶ��
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main61() 
{
	cout << add1(1, 2) << endl;
	system("pause");//system�����еİ��������������
	return 0;
}

//����һ���ӷ�������ʵ�����������
//ʵ��һ���ӷ����������������������ݡ�����������ӵĽ�������ҷ���
	//1������ֵ����							int
	//2����������							add
	//3�������б����뺯���еĲ�����		(int num1,int num2)
	//4����������䣨�����еľ������ݣ�		int sum = num1+num2;
	//5��return���ʽ�����غ������			return sum;
	//�����﷨
	/*
	����ֵ���� ������ �����б�
	{
		���������
		����ֵ
	}
	*/