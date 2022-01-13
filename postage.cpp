#include<iostream>
using namespace std;

int main(){
	char j;
	int h, m=8, _temp;
	cin >> h >> j;
	if (h > 1000)
		if ((h-1000)%500!=0)
			_temp = (int)(h-1000)/500+1;
		else
			_temp = (int)((h-1000)/500);
		m = 8 + _temp*4;
	if (j == 'y')
		m = m+5;
	cout << m;
	return 0;
}
