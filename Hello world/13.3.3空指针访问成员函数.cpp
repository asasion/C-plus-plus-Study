#include<iostream>
using namespace std;
/*
C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
*/
class Person13212
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		cout << "Age=" <<this-> m_Age << endl;//���������ǰ��Ĭ����һ��this->ָ�룬��ʾ�ǵ�ǰ���е����ԡ�
		
											  //��������ָ��p��һ����ָ�룬û�ж���ʵ�壬û��ָ��һ��ȷ�еĶ������ݣ�һ���յ�ֵ�޷������ڲ�����
	/*
	����취��
	if(this==NULL)//���������ǿ�ָ�룬��ֱ��return��������������У���ߴ���Ľ�׳��
	{
	return;
	}
	*/
	
	}
	int m_Age;
};
void test1321201()
{
	Person13212* p = NULL;//����һ��ָ��ָ���
	p->showClassName();//�ÿ�ָ��������еĺ�������һ��������û�г�Ա
	p->showPersonAge();
}
int main1333()
{
	test1321201();	//����������쳣�������д�
					//��showPersonAgeע�͵�����showClassName��������ʧ
					//��showClassNameע�͵�����showPersonAge��������		����ԭ�򣺴����ָ��Ϊ�գ�NULL��
	system("pause");
	return 0;
}