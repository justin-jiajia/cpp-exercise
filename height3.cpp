#include<iostream>
using namespace std;
int main() {
	int n,k;
	cin >> n;
	long int trees[n];
	for(int i=0; i<n; i++) {
		cin >> trees[i];
	}
	cin >> k;
	for(int i=0; i<n; i++) {
		if(trees[i]==k) {
			for (int x=i; x<n; x++) {
				trees[x]=trees[x+1];
			}
		}
	}
	for(int i=0; i<n; i++) {
		if (trees[i]!=0) cout << trees[i] << " ";
	}
	return 0;
}

