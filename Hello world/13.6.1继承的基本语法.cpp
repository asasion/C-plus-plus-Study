#include<iostream>
using namespace std;
//�̳�������������������֮һ
//��Ҫ��̫���ظ��Ĵ��룬�����ظ�д����
/*
����һЩ��ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ������ԡ�
��ʱ�Ϳ��Կ������ü̳еļ��������ٴ�����ظ�
*/
/*
�̳еĻ����﷨
�������ǿ����ܶ���վ�У����й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ��
�������ͷֱ�������ͨд���ͼ̳е�д����ʵ����ҳ�е����ݣ���һ�¼̳д��ڵ������Լ��ô���
*/
/*
//��ͨʵ��ҳ��
class Java
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++
class CPP
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
void test136101()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
*/
//�̳�д��
class BasePage//����ҳ����
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
};
//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
void test136101()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main1361()
{
	test136101();

	system("pause");
	return 0;
}
//�ܽ᣺�̳еĺô��������ظ��Ĵ���
//�﷨�� class ����(������) :�̳з�ʽ ���ࣨ���ࣩ
//		 class Java:public BasePage
//�������еĳ�Ա�������󲿷֣�
//һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա
//�ӻ���̳й����ı��ֹ��ԣ������������ĳ�Ա���ָ���