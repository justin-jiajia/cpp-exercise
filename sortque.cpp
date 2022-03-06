#include<iostream>
using namespace std;
int main() {
	int n,m,now,t[2001];
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		cin >> t[i];
	}
	for (int i=0; i<m; i++) {
		cin >> now;
		for (int x=0; x<sizeof(t); x++) {
			cout << "a";
			if (t[x]>=now) {
				for(int y=x; y<sizeof(t); y++) {
					t[y]=t[y+1];
				}
				t[x]=now;
				break;
			}
		}
	}
	for (int i=0; i<n; i++) {
		cout << t[i] << ' ';
	}
	return 0;
}
