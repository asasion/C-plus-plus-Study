#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//����������
/*
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�ṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��ѧ��������ѧ����ֵ
���մ�ӡ����ʦ�������Լ���ʦ������ѧ�������ݡ�
*/
struct Student//ѧ���ṹ��Ķ���
{
	string sName;//ѧ��������
	int score=0;//ѧ���ķ���
};
struct Teacher//��ʦ�Ľṹ�嶨��
{
	
	string tName;//��ʦ����
	struct Student sArray[5];//ѧ������

};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[],int len)//����ʦ����Ϣ���ٿռ䲢��ֵ�Ĳ���
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teahcer_";
			tArray[i].tName += nameSeed[i];
			//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
			for (int j = 0; j < 5; j++) {
				tArray[i].sArray[j].sName = "Student_";
				tArray[i].sArray[j].sName += nameSeed[j];
				int random = rand() % 61+40;//0~59��+40��40~100���м�������
				tArray[i].sArray[j].score = random;
			}
			
	}

}
//��ӡ������Ϣ
void printInfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName;
			cout << " ѧ���÷֣�" << tArray[i].sArray[j].score << endl;
		}

	}
}
int main()
{
	//��������ӣ�����ϵͳ��ǰ��ʱ������������
	srand((unsigned int)time(NULL));
	//1������3����ʦ������
	struct Teacher tArray[3];
	//2��ͨ��������3����ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ������ϢҲ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3����ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray,len);
	system("pause");
	return 0;
}