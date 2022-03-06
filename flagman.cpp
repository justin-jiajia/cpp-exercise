#include<iostream>
using namespace std;
int main() {
	int h_l,t,_tem;
	cin >> h_l;
	int men[h_l];
	t=0;
	for (int i=0; i<h_l; i++) {
		cin >> men[i];
	}
	for (int i=0; i<h_l; i++) {
		if (men[i]>men[t]) t=i;
	}
	if (t!=0) {
		_tem=men[0];
		men[0]=men[t];
		men[t]=_tem;
	}
	for (int i=0; i<h_l; i++) {
		cout << men[i] << ' ';
	}
	return 0;
}

