#include<iostream>
using namespace std;
int main23() {
	//1�������� float
	//2��˫���� double
	float f1 = 3.14;//Ĭ������£��༭�����һ��С��������˫���ȣ�double��������float����ʱ�������ת��Ϊһ�������ȡ�
	float f2 = 3.14f;//����С���������һ��f�����߱༭������һ��������
	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	double d1 = 3.14;
	double d2 = 3.1415926;//��C++�У�С��������ʾ��ȷ��С������5λ�������Ҫ�鿴�������Ч���֣���Ҫ������һЩ���á�
	cout << "d1=" << d1 << endl;
	cout << "d2=" << d2 << endl;
	//ͳ��float��doubleռ�õ��ڴ�ռ�
	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;//�����4���ֽ�
	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;//�����8���ֽ�
	//��ѧ��������ʾʵ��
	float f3 = 3e2;//3*10^2=200;
	cout << "f3=" << f3 << endl;
	float f4 = 3e-2;//3*10^-2=0.02
	cout << "f4=" << f4 << endl;
	return 0;
}