#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
�Զ����Ƶķ�ʽ���ļ����ж�д����
�򿪷�ʽָ��Ϊ***ios::binary***
*/
//������ д�ļ�
/*
�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ�ͣ�ostream& write(const char * buffer,int len)
�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
*/
//���ö����Ƶķ�ʽ���ļ����в�����ʱ��д������ݶ��������ܻ�����������������ǲ��ص��ģ�ֻҪ�ܶ���������
//��������д��������Դ����������ͣ�Ҳ����д���Զ������������

class Person1421
{
public:
	char m_Name[64];//��д�ַ������ʱ�򣬾�����Ҫ��string����Ϊstring������һ���࣬���ʹ��char�ַ�����
	int m_Age;
};
void test142101()
{
	//1������ͷ�ļ�
	//2������������
	ofstream ofs;
	//3�����ļ�
	ofs.open("person.txt", ios::out | ios::binary);//ofs.open(�ļ���,д����|������)
	//4��д�ļ�
	Person1421 p = { "����",18 };
	ofs.write((const char* )& p, sizeof(Person1421));//write((ǿתΪconst char *)&p,����ռ�õ��ڴ棩
	//5���ر��ļ�
	ofs.close();
}
int main1421()
{
	test142101();
	system("pause");
	return 0;
}
//�ܽ᣺�ļ�������������ͨ��write�������Զ����Ʒ�ʽд����