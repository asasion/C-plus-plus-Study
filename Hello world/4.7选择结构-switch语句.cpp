#include<iostream>
using namespace std;
int main47() {
	//10~9 ����
	//8~7 ����
	//6~5 һ��
	//5������ ��Ƭ
	
	//1���û����д��
	cout << "�����Ӱ���д��:" ;
	//2���û����д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score <<"�֡�"<< endl;
	//3�������û�����ķ�������ʾ�û����Ľ��
	switch(score){
			case 10 : cout << "�õ�ӰΪ�����Ӱ��" << endl; break;
			case 9 : cout << "�õ�ӰΪ�����Ӱ��" << endl; break;
			case 8 : cout << "�õ�ӰΪ�����Ӱ��" << endl; break;
			case 7 : cout << "�õ�ӰΪ�����Ӱ��" << endl; break;
			case 6 :cout << "�õ�ӰΪһ���Ӱ��" << endl; break;
			/*case 5 :cout << "�õ�ӰΪ��Ƭ��" << endl; break;
			case 4 :cout << "�õ�ӰΪ��Ƭ��" << endl; break;
			case 3 :cout << "�õ�ӰΪ��Ƭ��" << endl; break;
			case 2 :cout << "�õ�ӰΪ��Ƭ��" << endl; break;
			case 1 :cout << "�õ�ӰΪ��Ƭ��" << endl; break;
			case 0 :cout << "�õ�ӰΪ��Ƭ��" << endl; break*/;
			default://Ĭ�����
				cout << "�õ�ӰΪ��Ƭ��" << endl; break;//break��������case
	}
	//if��switch����
	//switchȱ�㣬�ж�ʱ��ֻ�������λ����ַ��ͣ���������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�
	//switch�����û��break�����������ִ��
	return 0;
}