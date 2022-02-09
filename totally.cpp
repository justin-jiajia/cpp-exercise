#include<iostream>
using namespace std;
int main() {
	int m,n,all;
	cin >> m >> n;
	for(int i=m; i<=n; i++) {
		all=0;
		for(int x=1; x<i; x++) if(i%x==0) all+=x;
		if (all==i) cout << i << endl;
	}
	return 0;
}

