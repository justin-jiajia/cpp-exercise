#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double pie=1,temp,low=pow(10,-6),i=3;
	do{
		temp = 1/i;
		pie -= temp;
		i+= 2;
		temp = 1/i;
		pie += temp;
		i+= 2;
	}while(temp>low);
	cout << pie*4;
	return 0;
}

