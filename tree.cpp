#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int l,m,a,b,e;
	cin >> m >> l;
	int trees[m];
	memset(trees,0,sizeof(trees));
	for (int i=0; i<l; i++) {
		cin >> a >> b;
		for (int x=a; x<=b; x++) {
			if (trees[x]==0) {
				trees[x]=1;
			}
		}
	}
	e=0;
	for (int i=0; i<=m; i++) {
		if (trees[i]==0) {
			e++;
		}
	}
	e++;
	cout << e;
	return 0;
}

