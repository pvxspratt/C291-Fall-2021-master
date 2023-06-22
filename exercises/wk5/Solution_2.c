/*
 * Question 2
 * Author: Phoebe Spratt
 * 10/04/21
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 30

int main(void) {
	int sum; // initialize sum of present numbers
	char str[SIZE]; // the string
	int c; // character input variable
	int k = 0; // counter

	// input string from user
	puts("str = ");

	// going over each character using getchar
	while((k < SIZE - 1) && (c = getchar()) != '\n') {
		if(isdigit(c)) {
			sum += c - 0x30;
		}
	}
	
	printf("sum = %d\n", sum);
}

