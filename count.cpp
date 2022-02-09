#include<iostream>
using namespace std;
int main(){
	int n,x,a,count;
	cin >> n >> x;
	for (int i=1;i<=n;i++){
		a=i;
		while(a>=1){
			if (a==x) count+=1;
			a/=10;
		}
	}
	cout << count;
	return 0;
}

