#include<iostream>
#include<string>
using namespace std;
int main415() {
	/*������switch��������У���������ֹcase������switch
	������ѭ������У�������������ǰ��ѭ�����
	������Ƕ��ѭ���У�����������ڲ�ѭ�����*/
	//breakʹ��ʱ��
	//1��������switch�����
	cout << "��ѡ�񸱱����Ѷȣ�" << endl;
	cout << "1����ͨ�Ѷ�" << endl;
	cout << "2���е��Ѷ�" << endl;
	cout << "3�������Ѷ�" << endl;
	int select = 0;//����ѡ�����ı���
	cin >> select;//�ȴ��û�����
	string str;
	switch (select) {
	case 1: str = "��ͨ"; break;
	case 2: str = "�е�"; break;
	case 3: str = "����"; break;
	}
	cout << "��ѡ����Ѷ�Ϊ��"<<str;	
		




	//2��������ѭ�������
	//3��������Ƕ��ѭ�������


	return 0;
}