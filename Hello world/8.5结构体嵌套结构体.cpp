#include<iostream>
#include<string>
using namespace std;
//���ã��ṹ���еĳ�Ա��������һ���ṹ��
//���磺ÿһ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age=0;//����
	int score=0;//����
};
//�ṹ��Ƕ�׽ṹ��
struct teacher
{
	int ID;
	string name;
	int age=0;
	struct student stu;//������ѧ����ѧ���ṹ�嶨������������
};
int main85()
{
	//������ʦ
	teacher t;
	t.ID = 10000;
	t.name = "����";
	t.age = 60;
	t.stu.name = "С��";
	t.stu.score = 60;
	t.stu.age = 20;
	cout << "��ʦ��������" << t.name << "��ʦ��ţ�" << t.ID << "��ʦ���䣺" << t.age << "��ʦ������ѧ��������" << t.stu.name
		<< "ѧ�������䣺" << t.stu.age << "ѧ���ķ�����" << t.stu.score << endl;
		
	system("pause");
	return 0;
}