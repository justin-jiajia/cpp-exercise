#include<iostream>
using namespace std;
int main() {
	int n,k,count;
	cin >> n;
	long int trees[n];
	for(int i=0; i<n; i++) {
		cin >> trees[i];
	}
	cin >> k;
	count=0;
	for(int i=0; i<n; i++) {
		if(trees[i]==k) count++;
	}
	cout << count;
	return 0;
}

