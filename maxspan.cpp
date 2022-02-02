#include<iostream>
using namespace std;
int main() {
	int n,b=0,s=0,span,_temp;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> _temp;
		if (_temp<s) s=_temp;
		if (_temp>b) b=_temp;
	}
	span=b-s;
	cout << span;
	return 0;
}

