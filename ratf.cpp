#include<iostream>
using namespace std;
int answer=0;
int get_answer(int n,int k) {
	if((n-k)%2==0&&(n-k)/2!=0) {
		get_answer((n-k)/2,k);
		get_answer((n-k)/2+k,k);
	} else {
		answer++;
	}
}
int main() {
	int n,k;
	cin >> n >> k;
	get_answer(n,k);
	cout << answer;
	return 0;
}

