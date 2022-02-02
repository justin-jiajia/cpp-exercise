#include<iostream>
using namespace std;
int main() {
	int a,b,c,m,n,a_t,b_t,c_t;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a_t >> b_t >> c_t;
		a += a_t;
		b += b_t;
		c += c_t;
	}
	m = a+b+c;
	cout << a << " " << b << " " << c << " " << m;
	return 0;
}

