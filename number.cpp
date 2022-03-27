#include<iostream>
using namespace std;
int yzh(int n){
	int h=0;
	for (int i=1;i<n;i++){
		if (n%i==0) h=h+i;
	}
	return h;
}
void check(int a,int b){
	if (a==b) return;
	if (yzh(a)==b&&yzh(b)==a) cout << a << " " << b << endl;
}
int main(){
	int n;
	cin >> n;
	for(int i=2;i<=n;i++){
		for(int g=2;g<=n;g++){
			check(i,g);
		}
	}
	return 0;
}

