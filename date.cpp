#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int date1,date2,year,month,day;
	int count=0;
	bool r;
	cin >> date1 >> date2;
	for (int date=date1; date<=date2; date++) {
		year=floor(date/10000);
		month=floor(date/100%100);
		day=date%100;
		r=year%4==0&&(year%100!=0||year%400==0);
		switch(month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (day>31) continue;
				break;
			case 2:
				if (r&&day>29) continue;
				if ((!r)&&day>28) continue;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (day>30) continue;
				break;
			default:
				continue;
				break;
		}
		if(floor(date/10000000)==date%10&&
		        floor(date/1000000%10)==floor(date%100/10)&&
		        floor(date/100000%100)==floor(date%1000/100)&&
		        floor(date/10000%10)==floor(date%10000/1000)) {
			count+=1;
		}
	}
	cout << count;
	return 0;
}

