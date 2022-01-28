#include<iostream>
using namespace std;
int main(){
	int n=0, k;
	int a=1, b=1, temp;
	cin >> k; 
	while (n<k-2){
		a=a+b;
		temp=a;
		a=b;
		b=temp;
		n++;
	}
	cout << b;
	return 0;
}

