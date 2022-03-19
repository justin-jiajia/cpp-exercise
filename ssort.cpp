#include<iostream>
using namespace std;
int DigitSum(int n) {
	if (n < 10) {
		return n;
	} else {
		return n % 10 + DigitSum(n / 10);
	}
}
int main() {
	int x,y;
	cin >> x >> y;
	int nums[y-x+2];
	int _nums[y-x+2];
	int _temp,now,c,k;
	for (int i=0; i<y-x+1; i++) {
		k=x+i;
		nums[i]=k;
		_nums[i]=DigitSum(k);
	}
	int small;
	for (int i=0; i<y-x+1; i++) {
		small=i;
		for (int x=i; x<y-x+1; x++) {
			if (_nums[small]>_nums[x]) small=x;
		}
		_temp=nums[small];
		nums[small]=nums[i];
		nums[i]=_temp;

		_temp=_nums[small];
		_nums[small]=_nums[i];
		_nums[i]=_temp;
	}
	for (int i=0; i<y-x+2; i++) {
		cout << nums[i] << endl;
	}
	return 0;
}

