#include<iostream>
using namespace std;
/*
ÿһ���Ǿ�̬��Ա����ֻ������һ�ݺ���ʵ����Ҳ���Ƕ��ͬ���͵Ķ���ṫ��ͬһ�δ���
���⣺����������������ĸ���������Լ��ģ�
��C++ͨ���ṩ����Ķ���ָ�룬thisָ�������������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	���磺������p1����ָ�룬this��ָ��p1��������p2����ָ�룬this��ָ��p2��
��thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
��thisָ�벻��Ҫ���壬����ֱ��ʹ��
thisָ�����;��
�����βκͳ�Ա����ͬ��ʱ��������thisָ��������
������ķǾ�̬��Ա�����з��ض�����������return *this
*/
class Person13211
{
public:
	Person13211(int age)
	{
		this->age = age;//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ��󣬵�һ��ageָ���еĳ�Աage
	}
	int age;//�˱�����ü�m_���Σ���Ȼ����������Ϊ����age��ͬһ��age��
			//����취2��this->age
	Person13211& PersonAddage13211(Person13211 p)
	{
		this->age += p.age;
		return *this;//thisָ��ָ��p2������p2����ı��壬����һ��Person13211������
	}
	Person13211 PersonAddage1321101(Person13211& p)//����Ա�����������ֵ�����Ƕ�������Ľ����
	{
		this->age += p.age;
		return *this;
	}
};
//1��������Ƴ�ͻ
	void test1321101()
{
		Person13211 p1(18);
		cout << "p1������Ϊ��" << p1.age << endl;
}
//2�����ض�����return *this
	void test1321102()//�ö���p1��10�ӵ�����p2��10����
	{
		Person13211 p1(10);

		Person13211 p2(10);
		p2.PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1);//��ʽ���˼�룬���磺cout<<����һֱ׷��
		//������p1��ֵ�ӵ�����p2��,��PersonAddage13211�����ķ���ֵ��voidʱ���޷���ֵ����˲����ٵ��ú���
		cout << "p2������Ϊ���" << p2.age << endl;
	}
	//void test13221103()
	//{
	//	Person13211 p1(10);

	//	Person13211 p2(10);

	//	p2.PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1).PersonAddage13211(p1);
	//}
int main1332()
{
	test1321101();//��������p1������Ϊ��-858993460
				  //ԭ	  �򣺱�������Ϊ����age��ͬһ��age����˲�δ���������age���и�ֵ������
				  //		  ��Ҳ�ͽ�����Ϊʲô֮ǰ�����ڶ���ı�������һ��m_������m����member,���еĳ�Ա
	test1321102();
	test1321101();
	system("pause");
	return 0;
}