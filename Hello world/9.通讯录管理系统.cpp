#include<iostream>
#include<string>
#define MAX 100//����������곣��
using namespace std;
/*
ϵͳ����
ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ���
���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ
ϵͳ����Ҫʵ�ֵĹ������£�
�������ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
����ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
��ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
��������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
���޸���ϵ�ˣ��������������޸�ָ����ϵ��
�������ϵ�ˣ����ͨѶ¼��������Ϣ
���˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
*/
/*
1���˵�����
�����������û�ѡ���ܵĽ���
����װ������ʾ���� ��void showMenu()
����main�����е��÷�װ�õĺ���
*/
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
/*
3�������ϵ��
����������ʵ�������ϵ�˹��ܣ���ϵ������Ϊ1000�ˣ���ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��
�����ϵ��ʵ�ֲ��裺
�������ϵ�˽ṹ��
�����ͨѶ¼�ṹ��
��main�����д���ͨѶ¼
����װ�����ϵ�˺���
�����������ϵ�˹���
*/
/*
3.1�����ϵ�˽ṹ��
��ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��
*/
//�����ϵ�˽ṹ��
struct Person
{
	//��ϵ������
	string m_Name;
	//��ϵ���Ա�1�� 2Ů
	int m_Sex=0;
	//��ϵ������
	int m_Age=0;
	//��ϵ�˵绰���������ַ���
	string m_Phone;
	//��ϵ��סַ
	string m_Addr;
};
/*
3.2���ͨѶ¼�ṹ��
��Ƶ�ʱ�������ͨѶ¼�ṹ���У�ά��һ������Ϊ1000�Ĵ����ϵ�˵����飬
����¼��ǰͨѶ¼����ϵ������
�������
*/

struct Addressbooks
{
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size=0;//ͨѶ¼����Ա����
};
//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//����Ӧ���ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ������ϵ��
		//��ϵ������
		string name;
		cout << "��������ϵ��������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//��ϵ���Ա�
		cout << "��������ϵ���Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true) 
		{
			//����������1����2�����˳�ѭ��������ֵΪԤ��ֵ��
			//���������������������
		cin >> sex;
		if (sex == 1 || sex == 2)
			{
			abs->personArray[abs->m_Size].m_Sex = sex;
			break;
			}
		cout << "������������������" << endl;
		}
		//��ϵ������
		cout << "��������ϵ�����䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age=age;
		//��ϵ�˵绰
		cout << "��������ϵ�˵绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone=phone;
		//��ϵ�˵�ַ
		cout << "��������ϵ�˼�ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr=address;
		//����ͨѶ¼�е�����
		abs->m_Size++;
		cout << "�����ϵ�˳ɹ���" << endl;
		system("pause");//�밴���������
		system("cls");//ϵͳ��������������
	}
}
/*
6����ʾ��ϵ��
������������ʾͨѶ¼�����е���ϵ����Ϣ
��ʾ��ϵ����Ϣ��ʵ�ֲ��裺
����װ��ʾ��ϵ����Ϣ����
��������ʾ��ϵ����Ϣ����
*/
/*
6.1��װ��ʾ��ϵ����Ϣ����
˼·���ж������ǰͨѶ¼��û����Ա������ʾ��¼Ϊ�գ���������0����ʾͨѶ¼����Ϣ
*/
//2����ʾ���е���ϵ����Ϣ
void showPerson(Addressbooks *abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ�ļ�¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex==1?"��" :"Ů")<< "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�����������
	system("cls");//����
}
/*3��ɾ��ָ������ϵ��
����������������������ɾ��ָ����ϵ��
ɾ����ϵ��ʵ�ֲ��裺
����װ�����ϵ���Ƿ����
����װɾ����ϵ�˺���
������ɾ����ϵ�˹���
*/
/*
7.1��װ�����ϵ���Ƿ����
���˼·��ɾ����ϵ��ǰ��������Ҫ���ж��û��������ϵ���Ƿ���ڣ��������ɾ����
��������ʾ�û�û��Ҫɾ������ϵ�ˣ�������ǿ��԰Ѽ����Ա�Ƿ���ڷ�װ��һ�������У�
������ڣ�������ϵ����ͨѶ¼�е�λ�ã������ڷ���-1
*/
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1��
int isExist(Addressbooks *abs,string name)//����1������ͨѶ¼ ����2���Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)//ΪʲôҪabs->m_Size-1����
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//�ҵ��ˣ�����������������е��±���
		}	
	}
	return -1;//���û���ҵ�����һ��-1,ע��return -1��λ�ã���Ҫ����forѭ������������
}
/*
7.2��װɾ����ϵ�˺���
�����û��������ϵ���жϸ�ͨѶ¼���Ƿ��д���
���ҵ�����ɾ��������ʾɾ���ɹ�
���Ҳ�����ʾ���޴���
*/
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs, name);//ret==-1�����޴��ˡ�ret!=-1,�鵽���ˡ�
	if (ret != -1)
	{
		//�鵽���ˣ�����ɾ���Ĳ���
		for (int i = ret; i < abs->m_Size; i++)//�������е�����ǰ�ƣ����ǵ���Ҫɾ����������
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i+1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}
//4������ָ����ϵ��
void findPerson(Addressbooks *abs)
{
	cout << "������Ҫ���ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs,name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << "\t"<<endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�޸�ָ������ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ�����֣�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "�������޸�������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������޸��Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������롣" << endl;
		}
		//����
		cout << "�������޸����䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//��ϵ�绰
		cout << "�������޸���ϵ�绰��" << endl;
		string phoneNumber = " ";
		cin >> phoneNumber;
		abs->personArray[ret].m_Phone = phoneNumber;
		//��ͥסַ
		cout << "�������޸ļ�ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//6�������ϵ��
//ʵ��˼·����ͨѶ¼��������ϵ����Ϣ�������ֻҪ��ͨѶ¼��¼����ϵ��������Ϊ0�����߼���ռ��ɡ�����Ҫ�����е���ϵ����Ϣ���ǵ�
void cleanPerson(Addressbooks *abs)
{
	cout << "�Ƿ�ȷ�����ͨѶ¼��" << endl;
	cout << "1������" << "  2��������" << endl;
	while (true)
	{
		int a;
		cin >> a;
		if (a == 1 || a == 2)
		{
			if (a == 1)
			{
				abs->m_Size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
				cout << "ͨѶ¼�����" << endl;
				break;
			}
			else
			{
				break;
			}
		}
		cout << "�����������������롣" << endl;
	}
	system("pause");
	system("cls");
}
int main9()
{
	//����ͨѶ¼�Ľṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;//ͨѶ¼����Ա������ʼ��Ϊ0
	int select = 0;//�����û�ѡ������ı���
	while (true)
	{
		//�˵��ĵ���
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݣ������޸�ʵ��
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��,���case��break֮ǰ�Ĵ���ܳ��ͻᱨ��
		/*{
			cout << "������ɾ������ϵ�˵�������" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "���޴��ˡ�" << endl;
			}
			else
			{
				cout << "�ҵ����ˡ�" << endl;
			}
		}*/
			deletePerson(&abs);
			break;

		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			cleanPerson(&abs);
			break;
/*
2���˳�����
�����������˳�ͨѶ¼ϵͳ
˼·�������û���ͬ��ѡ�񣬽��벻ͬ�Ĺ��ܣ�����ѡ��switch��֧�ṹ���������ܹ����д
���û�ѡ��0��ʱ��ִ���˳���ѡ����������������Ҳ���˳�����
*/
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������롣" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}