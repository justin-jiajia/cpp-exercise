#include<iostream>
using namespace std;
bool if_z(int n) {
	for (int x=2; x<n; x++) {
		if (n%x==0) return false;
	}
	return true;
}
int foud_b_s(int n) {
	int b=0;
	if (if_z(n)) return 0;
	for (int i=2; i<=n/2; i++) {
		if (b<i&&n%i==0&&if_z(i)) b=i;
	}
	return b;
}
int main() {
	int b=0,b_s=0,n,now,_t;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> now;
		_t=foud_b_s(now);
		if (b_s<_t) {
			b_s=_t;
			b=now;
		}
	}
	cout << b;
	return 0;
}

