#include<iostream>
#include<fstream>
using namespace std;
/*
�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
����ԭ�ͣ�istream& read(char *buffer,int len);
�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
*/
class Person1422
{
public:
	char m_Name[64];//����
	int m_Age;
};
void test142201()
{
	//1������ͷ�ļ�
	
	//2������������
	ifstream ifs;
	//3�����ļ�	�ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4�����ļ�
	Person1422 p;
	ifs.read((char *)&p,sizeof(Person1422));
	cout << "����:" << p.m_Name << "���䣺" << p.m_Age << endl;
	//5���ر��ļ�
	ifs.close();
}
int main()
{
	test142201();
	system("pause");
	return 0;
}