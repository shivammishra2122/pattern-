#include <iostream>
using namespace std;
int main (){   int input;
cin>>input;
	int n= 1;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j <= i; j++)
			cout << n << " ";
		n = n + 1;
		cout << endl;
	}
}
