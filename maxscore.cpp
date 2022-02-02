#include<iostream>
using namespace std;
int main(){
	int n, b=0, a;
	cin >> n;
	for (int x=0;x<n;x++){
		cin >> a;
		if (a>b){
			b=a;
		}
	}
	cout << b;
	return 0;
}

