#include<iostream>
using namespace std;
/*
����̳и���󣬵������������Ҳ����ø���Ĺ��캯��
���⣺���������Ĺ��������˳����˭��˭��
������һ��������������е�������������еĸ������
*/
//�̳��й��������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯����" << endl;
	}
	~Base()
	{
		cout << "Base������������" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯����" << endl;
	}
	~Son()
	{
		cout << "Son������������" << endl;
	}
};
void test136401()
{
	//Base b;
	/*
	���н����Base�Ĺ��캯����Base������������
	*/
	Son s;
	/*
	���н����
	Base�Ĺ��캯����
	Son�Ĺ��캯����
	Son������������
	Base������������
	*/
}
int main()
{
	test136401();
	
	system("pause");
	return 0;
}
/*
�̳��еĹ��������˳������
�ȹ��츸�࣬�ٹ������࣬������˳���빹���˳���෴
*/
//���е�Base�������е�Son���죬������Son��������Base