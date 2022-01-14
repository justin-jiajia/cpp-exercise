#include<iostream>
using namespace std;

int main(){
	char j;
	int h, m=8;
	cin >> h >> j;
	if (h > 1000)
		m = 8 + (((h-1000)%500!=0)?(int)(h-1000)/500+1:(int)((h-1000)/500))*4;
	if (j == 'y')
		m = m+5;
	cout << m;
	return 0;
}
