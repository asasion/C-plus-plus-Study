#include<iostream>
using namespace std;
//��������صĸ���:�����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ���������͡�
//�Ӻ����������
//���ã�ʵ�������Զ����������͵�������㣬��������Person��ʵ���������Էֱ����
/*
�������õ��������ͣ�������֪����ν�������
�������ʵ��������������ͨ���Լ�д��Ա������ʵ����������������Ժ󷵻��µĶ��� return 
*/
class Person1350
{
public:
	int m_A;
	int m_B;
	Person1350 PersonAddPerson(Person1350& p)
	{
		Person1350 temp;
		temp.m_A = this->m_A + p.m_A;//Ϊʲô��thisָ�룬thisָ�����еĳ�Ա������˭����˭����this
		temp.m_B = this->m_A + p.m_B;
		return temp;//���ص���Person���͵�ֵ
	}
};
int main1350()
{
	Person1350 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1350 p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person1350 p3;
	p3 = p1.PersonAddPerson(p2);//��ʹ�ñ������ṩ��operator+֮�󣬾Ϳ��Լ�Ϊ��p3=p1+p2;
								//��ȻҲ����д����p3=p1.operator+(p2);
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	system("pause");
	return 0;
}