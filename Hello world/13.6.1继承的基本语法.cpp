#include<iostream>
using namespace std;
//继承是面向对象的三大特性之一
//不要有太多重复的代码，不能重复写代码
/*
定义一些类时，下级别的成员除了拥有上一级的共性，还有自己的特性。
这时就可以考虑利用继承的技术，减少代码的重复
*/
/*
继承的基本语法
例如我们看到很多网站中，都有公共的头部，公共的底部，甚至公共的左侧列表，只有中心内容不同，
接下来就分别利用普通写法和继承的写法来实现网页中的内容，看一下继承存在的意义以及好处。
*/
/*
//普通实现页面
class Java
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++
class CPP
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
void test136101()
{
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
*/
//继承写法
class BasePage//公共页面类
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
};
//Java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
void test136101()
{
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
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
//总结：继承的好处：减少重复的代码
//语法： class 子类(派生类) :继承方式 父类（基类）
//		 class Java:public BasePage
//派生类中的成员包含两大部分：
//一类是从基类继承过来的，一类是自己增加的成员
//从基类继承过来的表现共性，而子类新增的成员表现个性