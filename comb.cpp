#include<iostream>
using namespace std;
int j(int c){
	int jg=1;
	for (int i=1;i<=c;i++){
		jg *= i;
	}
	return jg;
}
int c(int a,int b) {
	return j(a)/j(b)/j(a-b);
}
int main() {
	int n,m,out;
	cin >> n >> m;
	out = c(n,m);
	cout << out;
	return 0;
}

