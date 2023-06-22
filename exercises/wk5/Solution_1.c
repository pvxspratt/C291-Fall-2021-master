/*
 * Question 1
 * Author: Phoebe Spratt
 * 10/04/21
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	int N; // string length

	int iCount; // counter for instances of i
	int hCount; // counter for instances of h
	int res; // min numbers to change to make all I or all H

	// user prompts
	printf("%s", "N = ");
	scanf("%d", &N);
	
	char str[N]; // string of length N
	printf("%s", "S = ");
	scanf("%s", str);

	for(int i = 0; i < N; i++) {
		// counting instances of I
		if(str[i] == 'I') {
			iCount++;
		}

		// counting instances of H
		if(str[i] == 'H') {
			hCount++;
		}

		// find min of the two counts
		if(iCount < hCount) {
			res = iCount;
		} else {
			res = hCount;
		}

	}

	printf("%d\n", res);

}




