#include<iostream>
using namespace std;
int main414() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1;j<=i; j++) {//�к�С���к�
			cout << j << "*" << i <<"=" << i * j <<"\t";
			
		}
		cout << endl;
	}

	return 0;
}