#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	switch(t){
		case 1:	case 3:	case 5:
			cout << "NO";
			break;
		case 2:	case 4:	case 6: case 7:
			cout << "YES";
			break;
	}
	return 0;
}
