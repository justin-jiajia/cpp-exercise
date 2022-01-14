#include<iostream>
using namespace std;

int main(){
	char c, c2;
	cin >> c;
	c2 = (c >= 'a' && c <= 'z')?c-32:c+32;
	cout << c2;
	return 0;
}
