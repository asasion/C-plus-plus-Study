#include<iostream>
#include<string>
using namespace std;
//���ã����ṹ����Ϊ���������д���
//���ݷ�ʽ�����֣�
//*1��ֵ����->�ββ���ı�ʵ��
//*2����ַ����->���ʵ�η����ı䣬�β�Ҳ�ᷢ���ı�
//�ṹ���������Ĳ���
//��ѧ�����뵽һ�������У���ӡѧ��������
struct student
{
	string name;//����
	int age;//����
	int score;//����
};
//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent1(struct student s)//ֵ���ݲ���ı�ʵ��
{
	s.age = 100;
	cout << "��ֵ���ݺ����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score<<endl;//ֵ�����á�.��
}
//2����ַ����
void printStudent2(struct student* p)//��ַ���ݻ�ı�ʵ��
{
	p->name = "����";
	cout << "�ڵ�ַ�����д�ӡ ������" << p->name << "���䣺" << p->age << "������" << p->score << endl;//��ַ����ָ���á�->��
}
//ֵ�������ַ���ݵ�����
int main86()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
	//�����ṹ�����
	struct student s;//�ڽṹ���д���һ��s��ѧ������
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);//��ַ���ݣ�ǰ���һ��ȡַ��
	cout << "��main�����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score << endl;
		system("pause");
	return 0;
}