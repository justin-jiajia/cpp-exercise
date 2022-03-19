#include<iostream>
using namespace std;
bool check(int n) {
	for (int i=2;i<n-1;i++) if (n%i==0) return false;
	return true;
}
int main() {
	int count,n;
	cin >> n;
	count=0;
	for (int m=2; m<=n; m++) if (check(m)) count++;
	cout << count;
	return 0;
}

