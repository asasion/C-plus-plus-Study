#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*
���ļ���д�ļ��Ĳ������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�
���ļ��������£�
1������ͷ�ļ�
#include<fstream>
2������������
ifstream ifs;
3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
ifs.open("�ļ�·��",�򿪷�ʽ);
4��������
���ַ�ʽ��ȡ
5���ر��ļ�
ifs.close();
*/
int main1412()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;
	//3�����ļ�	�����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
		if (!ifs.is_open())//ifs.is_open�����ж��Ƿ�򿪣�����һ����������������,!��ʾȡ��
		{
			cout << "�ļ���ʧ��" << endl;//�ļ���ʧ�ܵ�ԭ��1���ļ���д��2���ļ���·��д��
		}
	//4��������
	////��һ��
	//	char buf[1024] = { 0 };//����һ���ַ����飬���Ҿ���ֵΪ0
	//	while (ifs >> buf)//ifs>>buf������ȫ����ȡ��ɺ󣬻᷵��false��while�˳�ѭ��
	//	{
	//		cout << buf << endl;
	//	}
	////�ڶ���
	//	char buf[1024] = { 0 };
	//	while (ifs.getline( buf, 1024))//ifs.getline(char*,��ȡ��λ��)
	//	{
	//		cout << buf << endl;
	//	}
	// ������
		string buf;//�����е����ݷŵ��ַ�����
		while (getline(ifs, buf))//ȫ�ֺ���getline(basic_istream�����,char *���õ��ַ���)
		{
			cout << buf << endl;
		}
	//������	���Ƽ���
		//���ļ��е��������ݰ��ַ�һ��һ����������
		char c;
		while ((c=ifs.get())!=EOF)//get����һ��ֻ��һ���ַ�,EOFָ�ļ�βEnd of File
		{
			cout << c;
		}
	//5���ر��ļ�
		ifs.close();//�ر��ļ�
	system("pause");
	return 0;
}
/*
�ܽ᣺
�����ļ���������ifstream���ɶ���д��������fstream��
������is_open���������ж��ļ��Ƿ�򿪳ɹ�
��close�ر��ļ�
*/
