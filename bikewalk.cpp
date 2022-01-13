#include<iostream>
using namespace std;

int main(){
	double m, w, r;
	cin >> m;
	r = 27 + 23 + m / 3.0;
	w = m / 1.2;
	if (w > r)
		cout << "Bike";
	else
		cout << "Walk";
	return 0;
}
