#include<iostream>
using namespace std;
void gcd(int *a,int *b) {
    int temp = *a;
    while(*a%*b != 0){
        *a = *b;
        *b = temp%*b;
        temp = *a;
    }
}
int main() {
	int m,n;
	cin >> m >> n;
	gcd(&m,&n);
	cout << n;
	return 0;
}

