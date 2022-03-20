#include<iostream>
using namespace std;
int zf=0;
int stair(int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else {
        return stair(n - 1) + stair(n - 2);
    }
}
int main(){
	int n;
	cin >> n;
	cout << stair(n);
	return 0;
}

