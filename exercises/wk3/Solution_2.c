/*
 * Question 2
 * Author: Phoebe Spratt
 * 09/13/21
*/

#include <stdio.h>

// greatest common divider function prototype
int findGCD(int x, int y);

int main(void) {
	int num1; // integer input
	int num2; // other input

	printf("%s", "Enter two numbers separated with a space: ");
	scanf("%d %d", &num1, &num2);

	// num 1 and 2 as args for findGCD function
	printf("The greatest common divider is: %d\n", findGCD(num1, num2));

} // end main

// defining the findGCD function, where x and y are the parameters
int findGCD(int x, int y) {
	// if y is zero GCD is x
	if(y == 0) {
		return x;
	} else { // replace x with y, and y with remainder(using modulo)
		return findGCD(y, x % y);
	}
}

