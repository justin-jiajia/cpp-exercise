#include<iostream>
using namespace std;
void v(int n) {
	if (n==1) return;
	if (n%2==0) {
		cout << n << "/2=";
		n=n/2;
		cout << n << endl;
	}
	if (n>1&&n%2==1) {
		cout << n << "*3+1=";
		n=n*3+1;
		cout << n << endl;
	}
	v(n);
}
int main() {
	int n;
	cin >> n;
	v(n);
	return 0;
}

