#include<iostream>
using namespace std;
int main() {
	int a, b, c, m, z;
	char t;
	cin >> t;
	if (t == 'J') {
		cin >> a >> b;
		m = a*b;
		z = 2*(a+b);
		cout << z << " " << m;
	} else {
		cin >> a >> b >> c;
		z = a+b+c;
		cout << z;
	}
	return 0;
}

