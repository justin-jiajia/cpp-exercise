#include<iostream>
using namespace std;
int main() {
	int n,x;
	cin >> n >> x;
	int t[n];
	for (int i=0; i<n; i++) {
		cin >> t[i];
	}
	for (int i=0; i<n; i++) {
		if(t[i]==x) {
			for (int x=i; x<n; x++) {
				t[x]=t[x+1];
			}
		}
	}
	for (int i=0; i<n; i++) {
		if (t[i]!=4254705) cout << t[i] << ' ';
	}
	return 0;
}

