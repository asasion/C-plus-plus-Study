#include<iostream>
using namespace std;
//ȫ�ֱ�������̬�������ַ���������const���ε�ȫ�ֱ�����ȫ�ֳ�����������ȫ����
//�ֲ�������const���εľֲ�����(�ֲ�����)������ȫ����
//c-const���� g-globalȫ�� l-lock�ֲ�
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;//const���ε�ȫ�ֱ�������ȫ�ֳ���
const int c_g_b = 10;
int main10112()
{
	//ȫ����
	//ȫ������ţ�ȫ�ֱ�������̬����������
	//��ȫ�����Ͳ���ȫ�����ڵı�����ʲô����
	//����һ����ͨ�ľֲ�����a��b,�ں������ڵı������оֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;//int��ʮ������ǿתΪʮ����
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;
	//��̬����������ͨ����ǰ��static���Σ������ھ�̬��������̬����Ҳ�����ȫ������
	static int s_a = 10;
	static int s_b= 10;
	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;
	//���� ��Ϊ�ַ���������const���α���
	//�ַ������� ��˫�����������ľ����ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
	//const���α���
	//const���ε�ȫ�ֱ���
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;
	//const���εľֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}