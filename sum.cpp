#include<iostream>
using namespace std;
int main() {
	int m,n,all=0;
	cin >> m >> n;
	for(int i=m; i<=n; i++) {
		if(i%17==0) all+=i;
	}
	cout << all;
	return 0;
}

