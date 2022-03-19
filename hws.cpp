#include<iostream>
#include <sstream>
using namespace std;
bool if_hws(int x) {
	int y=0,x2=x;
	while(x!=0) {
		y = y*10+x%10;
		x /=10;
	}
	return x2==y;
}
int main() {
	int count,n;
	cin >> n;
	count=0;
	for (int m=1; m<=n; m++) if (if_hws(m)) count++;
	cout << count;
	return 0;
}

