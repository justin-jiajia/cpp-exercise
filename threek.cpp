#include<iostream>
using namespace std;
int main() {
	int m,n,k,c=0,h,x;
	cin >> m >> n >> k;
	for (int i=m; i<=n; i++) {
		h=0;
		x=i;
		while(x) {
			if(x % 10 == 3) h++;
			x /= 10;
		}
		if (i%19==0&&h==k) c+=1;
	}
	cout << c;
	return 0;
}

