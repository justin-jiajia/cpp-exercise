#include<iostream>
using namespace std;

int main(){
	int a, b, c, m;
	cin >> a >> b >> c;
	m =  (a>b&&a>c)?a: ((b>a&&b>c)?b : c);
	cout << m;
	return 0;
}
