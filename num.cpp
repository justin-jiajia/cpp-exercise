#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,_temp,max,pj,y;
	cin >> n;
	int tall[n];
	for (int x=0; x<n; x++) {
		cin >> _temp;
		tall[x]=_temp;
	}
	max=0;
	for (int x=0; x<n; x++) {
		max+=tall[x];
	}
	pj=floor(max/n);
	y=0;
	for (int x=0; x<n; x++) {
		if (tall[x]>pj) y++;
	}
	cout << y;
	return 0;
}

