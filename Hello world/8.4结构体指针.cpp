#include<iostream>
#include<string>
using namespace std;
//�ṹ��ָ��
//���ã�ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�������->������ͨ���ṹ��ָ����ʽṹ������
//����ѧ���ṹ��
struct Student
{
	string name;//����
	int age;//����
	int score;//����
};
int main84()
{
	//1������ѧ���ṹ�����
	struct Student s = { "����",18,100 };
	//2��ͨ��ָ��ָ��ṹ�����
	//int* p = &s;�����У���Ϊ�����sȡ��ַ�����ص���student����������,������int���͵�����
	struct Student* p = &s;//�˴���struct����ʡ��
	//3��ͨ��ָ����ʽṹ������е�����
	p->age;//ָ��ͨ����ͷ���ʽṹ���еı���
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score<<endl;
	system("pause");
	return 0;
}
//�ܽ᣺�ṹ��ָ�����ͨ����->�������������ʽṹ���еĳ�Ա