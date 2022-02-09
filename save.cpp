#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int all_y,is_save=0,ys,t,no_y=0;
	for (int i=1; i<=12; i++) {
		cin >> ys;
		all_y+=300;
		all_y-=ys;
		if(all_y<0) no_y=i;
		if (all_y>=100) {
			t=floor(all_y/100)*100;
			is_save+=t;
			all_y-=t;
		}
	}
	if (no_y!=0) cout << "-" << no_y;
	else cout << all_y++is_save*1.2;
	return 0;
}

