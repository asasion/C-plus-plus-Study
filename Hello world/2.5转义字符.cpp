#include<iostream>
using namespace std;
int main25() {
	//转义字符“\”
	//1、换行符号
	cout << "hello world" << endl;
	cout << "hello world\n";//转义字符写在双引号内
	//2、反斜杠
	//cout<<"\"<<endl;
	cout<<"//"<<endl;//在输出反斜杠时，必须多一个反斜杠，前一个表示转义，后面的代表输出字符内容
	//3、水平制表符 可以整齐地输出数据，方便直观
	cout << "aaa\t" << endl;
	cout << "aaa\thello" << endl;//“a”后的空格取决于“a”占了几个字符，因为“\t”始终占有8个空格，可以使后面输入的内容在八个字符后对其
	cout << "aaaa\thello" << endl;
	cout << "aaaaa\thello" << endl;
	cout << "aaaaaa\thello" << endl;
	cout << "aaaaaaa\thello" << endl;
	cout << "aaaaaaaa\thello" << endl;//如果八个空格全站满后，“\t”会继续占用8个空格
	return 0;
}