#include<iostream>
using namespace std;
int main() {
	char isbn[12];
	int _temp=0, c=0;
	char r, now;
	cin >> isbn;
	for (int i=0; i<13; i++) {
		now = isbn[i];
		if (now != '-' && i != 12) {
			c += 1;
			_temp += (now-'0')*c;
		}
	}
	_temp = _temp%11;
	if (_temp == 10){
		r = 'X';
	}else{
		r = _temp+'0';
	}
	if (r == isbn[12]){
		cout << "Right";
	}else{
		isbn[12] = r;
		cout << isbn;
	}
	return 0;
}

