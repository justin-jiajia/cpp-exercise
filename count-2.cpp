#include<iostream>
using namespace std;
int c=0;
int s(int n){
	c++;
	for(int i=1;i<=n/2;i++){
		s(i);
	}
}
int main(){
	int n;
	cin >> n;
	s(n);
	cout << c;
	return 0;
}

