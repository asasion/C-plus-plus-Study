#include<iostream>
using namespace std;
//��������صĸ���:�����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ���������͡�
//�Ӻ����������
//���ã�ʵ�������Զ����������͵�������㣬��������Person��ʵ���������Էֱ����
/*
�������õ��������ͣ�������֪����ν�������
�������ʵ��������������ͨ���Լ�д��Ա������ʵ����������������Ժ󷵻��µĶ��� return
*/
class Person1351
{
public:
	int m_A;
	int m_B;
	//Person1351 operator+(Person1351& p)//***1��ͨ����Ա�������ؼӺ�***
	//{
	//	Person1351 temp;
	//	temp.m_A = this->m_A + p.m_A;//Ϊʲô��thisָ�룬thisָ�����еĳ�Ա������˭����˭����this
	//	temp.m_B = this->m_A + p.m_B;
	//	return temp;//���ص���Person���͵�ֵ
	//}
};
Person1351 operator+(Person1351& p1, Person1351& p2)//***2��ͨ��ȫ�ֺ������ؼӺ�***
{
	Person1351 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
Person1351 operator+(Person1351& p1, int num)//�������������operator+��Ҳ���Է�������
{
	Person1351 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
int main()
{
	Person1351 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person1351 p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person1351 p3;
	//p3 = p1.operator+(p2);//��ʹ�ñ������ṩ��operator+֮�󣬾Ϳ��Լ�Ϊ��p3=p1+p2;			  
	//cout << "p3.m_A=" << p3.m_A << endl;
	//cout << "p3.m_B=" << p3.m_B << endl;
	p3 = p1+p2;//��ȻҲ����д����p3=p1.operator+(p2);
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	//��������أ�Ҳ���Է�����������
	p3 = p1 + 133;//Person��������+int��������
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	system("pause");
	return 0;
}
/*
�ܽ᣺
��������ͬʱʹ�����ֺ�����������
����ʹ��ȫ�ֺ���operator+��������ʱ��operator+������ĳ�Ա����������޷�ͨ��ʵ���������Խ��е���
�����������������ʹ��ʱ������
����Ա�������ر��ʣ�Person p3=p1.operator+(p2);
��ȫ�ֺ������ر��ʣ�Person p3=oprator(p1,p2);
����������غ���Ҳ���Է�������
��***�������õ��������͵ı��ʽ��������ǲ����ܸı��
��***��Ҫ������������أ���Ҫ�ѼӼ��˳����
*/
