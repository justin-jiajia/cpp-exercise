#include<iostream>
using namespace std;
int main() {
	int n, n_l;
	cin >> n_l;
	if (n_l%2==0) {
		n=n_l/2;
		cout << n_l << "/2=" << n << endl;

	} else {
		n=n_l*3+1;
		cout << n_l << "*3+1=" << n << endl;
	}
	n_l=n;
	do {
		n=n_l/2;
		cout << n_l << "/2=" << n << endl;
		n_l=n;
	} while(n_l!=1);
	cout << "End";
	return 0;
}

