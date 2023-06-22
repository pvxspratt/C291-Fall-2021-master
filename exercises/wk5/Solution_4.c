/*
 * Question 4
 * Author: Phoebe Spratt
 * 10/04/21
*/

#include <stdio.h>
#define SIZE 30

// convert to 24 hour function prototype
void convertTime(int h, int m, int s, char mer[]);

int main(void) {
	int hr;
	int min;
	int sec;
	char meridiem[SIZE];

	printf("%s", "Enter a time in 12 hour format hh:mm:ssAM/PM ");
	scanf("%d%*c%d%*c%d%s", &hr, &min, &sec, meridiem);

	convertTime(hr, min, sec, meridiem);
}

// converting into 24 hr format
void convertTime(int h, int m, int s, char mer[]) {
	int hr = h;
	int min = m;
	int sec = s;
	
	// if time is AM, keep all the same just drop the AM
	if(mer[0] == 'A') {
		if(hr == 12) {
			hr = 00;
		}
		
		printf("%02d:%02d:%02d\n", hr, min, sec);
	} else if(mer[0] == 'P') {
		hr = hr + 12;
		if(hr == 24) {
			hr = 12;
		}
		
		printf("%02d:%02d:%02d\n", hr, min, sec);
	}
}	

