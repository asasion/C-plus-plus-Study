#include<iostream>
using namespace std;

class Animal137102
{
public:
	virtual void speak()//�����ĵ�ַ�ǣ�&Animal::speak����Ϊ�����һ��Animal��ĳ�Ա����
	{
		cout << "������˵��" << endl;
	}
};
//è��
class Cat137102 :public Animal137102
{
public:
	void speak()//��̬��̬��ԭ����������д�˸�����麯���������е��麯�����ڲ����滻��������麯����ַ���麯�����е����ݣ�&cat::speak(),�滻���˸����&Animal::speak()
				//�������ָ���������ָ����������ʱ�򣬾ͷ����˶�̬��Animal &animal =cat��animal.speak()���õ���cat������д��cat::speak()��ԭ����Animal::speak()�����ǵ���
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog137102 :public Animal137102
{
public:
	 void speak()
	{
		cout << "С����˵��" << endl;
	}
};
void doSpeak(Animal137102& Animal137102)
{
	Animal137102.speak();
}
void test13710201()
{
	Cat137102 cat;
	doSpeak(cat);
	Dog137102 dog;
	doSpeak(dog);
}
void test13710202()
{
	cout << "sizeof Animal = " << sizeof(Animal137102) << endl;//ִ�н����1���ǿ�����ռ�Ĵ�С1����Ϊ��ʱAnimal���д�ʱֻ��һ���Ǿ�̬�ĳ�Ա��������������Ķ����ϣ��Ƿֿ��洢��
	//���ڸ����м���virtual�ؼ��ֺ�sizeof(Animal137102)��Ϊ4��˵������ڲ��ṹ�����˸ı䣬���ڶ���һ���麯����ָ��vfptr��ע����vbptr������
	//vfptr���麯������ָ�룩 v-virtual��f-function��ptr-pointerָ��һ���麯����vftable v-virtual��f-function��table
	//�麯�����ڻ��¼һ���麯���ĵ�ַ &Animal::speak
}
int main13712()
{
	//test13710201();
	test13710202();
	system("pause");
	return 0;
}