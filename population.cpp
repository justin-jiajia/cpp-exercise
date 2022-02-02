#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	double x, n, y=0;
	cin >> x >> n;
	while (y < n) {
		x += x*0.001;
		y++;
	}
	cout << fixed << setprecision(4) << x;
	return 0;
}

