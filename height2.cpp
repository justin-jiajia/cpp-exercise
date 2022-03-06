#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin >> n >> m;
	long int trees[n];
	int asks[m],answers[m];
	for(int i=0; i<n; i++) {
		cin >> trees[i];
	}
	for(int i=0; i<m; i++) {
		cin >> asks[i];
	}
	for(int x=0; x<m; x++) {
		answers[x]=0;
		for(int i=0; i<n; i++) {
			if(trees[i]==asks[x]) answers[x]++;
		}
	}
	for(int i=0; i<m; i++) {
		cout << answers[i] << " ";
	}
	return 0;
}

