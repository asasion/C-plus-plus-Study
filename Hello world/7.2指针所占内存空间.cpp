#include<iostream>
using namespace std;
//ָ��Ҳ��һ���������ͣ���ôָ����ռ���ڴ�ռ��Ƕ��٣�
//ָ�뱣�����һ��ʮ�����Ƶ���
//��32λ����ϵͳ�£������Ǻ������͵�ָ�붼��ռ4���ֽڵĿռ�
//��64λ����ϵͳ�£�ָ��ռ��8���ֽڿռ�
//��������һ�㶼��32λ�Ĳ���ϵͳ
int main72()
{
	//ָ����ռ���ڴ�ռ��С
	int a = 10;
	int* p=&a;
	cout << "size of (int *) =" << sizeof(int*) << endl;
	cout << "size of (p)=" << sizeof(p) << endl;
	//���ۺ����������ͣ�ָ����ռ���ڴ�ռ䶼��4��
	cout << "size of (float *) =" << sizeof(float *) << endl;
	cout << "size of (double *) =" << sizeof(double *) << endl;
	cout << "size of (char *) =" << sizeof(char *) << endl;
	//��vs��debug/release�ԣ�x86����32λ�Ĳ���ϵͳ��ѡ��x64����64λ�Ĳ���ϵͳ��
	system("pause");
	return 0;
}