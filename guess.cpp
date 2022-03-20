#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n) {
	for (int i=2; i<=sqrt(n); i++) if (n%i==0) return false;
	return true;
}
void check(int n) {
	cout << n << "=";
	for (int i=2; i<n; i++) {
		if (prime(i)&&prime(n-i)) {
			cout << i << "+" << n-i;
			break;
		}
	}

}
int main() {
	int n;
	cin >> n;
	check(n);
	return 0;
}

