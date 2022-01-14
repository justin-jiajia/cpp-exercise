#include<iostream>
using namespace std;

int main(){
	char t;
	int a, b;
	cin >> a >> b >> t;
	switch(t){
		case '+':
			cout << a+b;
			break;
		case '-':
			cout << a-b;
			break;
		case '/':
			if (b == 0){
				cout << "Divided by zero";
				break;
			}
			cout << a/b;
			break;
		case '*':
			cout << a*b;
			break;
		default:
			cout << "Invalid operator";
			break;
	}
	return 0;
}
