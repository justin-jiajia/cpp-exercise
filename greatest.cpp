#include<iostream>
using namespace std;
int main(){
	int x,y, mod;
	cin >> x >> y;
	do{
		mod=y%x;
		y=x;
		if (mod!=0) x=mod;
	}while(mod!=0);
	cout << x;
	return 0;
}

