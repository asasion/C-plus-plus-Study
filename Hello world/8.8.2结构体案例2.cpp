#include<iostream>
#include<string>
using namespace std;
/*����������
���һ��Ӣ�۽ṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/
//1�����Ӣ�۵Ľṹ��
struct Hero
{
	string name;//Ӣ�۵�����
	int age;//Ӣ�۵�����
	string gender;//Ӣ�۵��Ա�
};
//ð������ ʵ���������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j�±��Ԫ���������j+1Ԫ�ص����䣬�ͽ�������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
};
//��ӡ������������Ϣ
void print(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ��������" << heroArray[i].name << " Ӣ�����䣺" << heroArray[i].age << " Ӣ���Ա�" << heroArray[i].gender << endl;
	}
};
int main882()
{
//2������һ�����飬�������Ӣ��
	struct Hero heroArray[5] =
	{
		 {"����",23,"��"},
		 {"����",22,"��"},
		 {"�ŷ�",20,"��"},
		 {"����",21,"��"},
		 {"����",19,"Ů"},
	};
	
	//3��������������򣬰������������������
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��ӡ��" << endl;
	print(heroArray, len);
	bubbleSort(heroArray,len);
	//4���������Ľ����ӡ���
	cout << "������ӡ��" << endl;
	   print(heroArray, len);
	system("pause");
	return 0;
}