#include<iostream>
using namespace std;
int main(){
	int n, c1, j1, c2, j2, c3, j3, l_j, zj1, zj2, zj3;
	cin >> n;
	cin >> c1 >> j1;
	cin >> c2 >> j2;
	cin >> c3 >> j3;
	
	zj1 = n%c1==0?int(n/c1)*j1:int(n/c1+1)*j1;
	zj2 = n%c2==0?int(n/c2)*j2:int(n/c2+1)*j2;
	zj3 = n%c3==0?int(n/c3)*j3:int(n/c3+1)*j3;
	
	l_j = (zj1<zj2&&zj1<zj3)?zj1:(zj2<zj3&&zj2<zj1)?zj2:zj3;
	
	cout << l_j;
	
	return 0;
}

