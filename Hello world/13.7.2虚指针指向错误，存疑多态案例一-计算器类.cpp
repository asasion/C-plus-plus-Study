//#include<iostream>
//using namespace std;
//#include<string>
///*
//����������
//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//��̬���ŵ㣺
//��������֯�ṹ����
//���ɶ���ǿ
//������ǰ�ںͺ��ڵ���չ�Լ�ά��
//*/
////�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
//
////��ͨд��
//class Calculator1372
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//		int m_Num1=0;//������1
//		int m_Num2=0;//������2
//	};
//void test137201()
//{
//	Calculator1372 c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//		//�������չ�µĹ��ܣ�����Ҫ�޸�Դ�룬������������չһ�������ļ���
//		//����ʵ�Ŀ����У��ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//		//���ϴ�ͳ�������Ľṹ�ǳ������ں���ά������չ
//		
//		
//		//���ö�̬��д������
//		//��̬�����ĺô���1����֯�ṹ����2���ɶ���ǿ3������ǰ�ںͺ�����չ�Լ�ά���Ը�
//		//ʵ�ּ������ĳ����࣬����ʲô����д��ֻ�ǰ�getResult�������������
//		class AbstractCalculator//�ӷ��������ĸ���
//		{
//		public:
//			virtual int getResult()//д���麯��
//			{
//				return 0;//�����δ�����ȫʱ����return 0
//			}
//			int m_Num1=0;
//			int m_Num2=0;
//		};
//		//�ӷ���������
//		class AddCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 + m_Num2;
//			}
//		};
//		//������������
//		class SubCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 - m_Num2;
//			}
//		};
//		//�˷���������
//		class TimesCalculator :public AbstractCalculator
//		{
//		public:
//			 int getReuslt()
//			{
//				return m_Num1 * m_Num2;
//			}
//		};
//
//void test137202()
//{
//	//��̬��ʹ������
//	//�����ָ�������ָ���������
//	//ʵ�ּӷ�����
//	AbstractCalculator * abc = new AddCalculator;//�ɸ���ָ��ָ���������
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//�����ǵ�����
//	delete abc;
//	//ʵ�ּ�������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 9;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	//ʵ�ֳ˷�����
//	abc = new TimesCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 9;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//int main1372()
//{
//	//test137201();
//	test137202();
//	system("pause");
//	return 0;
//}
//�ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬���ŵ�ܶ�
