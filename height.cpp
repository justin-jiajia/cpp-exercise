#include<iostream>
using namespace std;
int main() {
	int i=0;
	double h, a_h=0;
	cin >> h;
	a_h -= h;
	while (i<10) {
		a_h += h*2;
		h /= 2;
		i++;
	}
	cout << a_h << endl << h;
	return 0;
}

