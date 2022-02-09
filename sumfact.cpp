#include<iostream>
using namespace std;
int main() {
	int n,j=0,y;
	cin >> n;
	for (int i=1; i<=n; i++) {
		y=1;
		for (int x=1; x<=i; x++) y*=x;
		j+=y;
	}
	cout << j;
	return 0;
}

