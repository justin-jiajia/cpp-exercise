#include<iostream>
using namespace std;

int main(){
	cin >> c >> m;
	if (c < 60){
		cout << "1";
	}else{
		if (m < 60){
			cout << "1";
		}else{
			cout << "0";
		}
	};
	return 0;
}
