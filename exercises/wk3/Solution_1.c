/*
 * Question 1
 * Author: Phoebe Spratt
 * 09/12/21
*/

#include <stdio.h>

// primeNum function prototype
int primeNum(int x, int y);

int main(void) {
	int lower; // first integer input from user
	int upper; // second 
	
	printf("%s", "Enter the lower limit: ");
	scanf("%d", &lower);

	printf("%s", "Enter upper limit: ");
	scanf("%d", &upper);

	// lower and upper as the args for the primeNum function
	printf("Prime numbers between %d to %d are: ", lower, upper);
	primeNum(lower, upper);
} // end main


// defining the primeNum function using x and y as parameters
int primeNum(int x, int y) {
	int low = x + 1; // lower limit
	int upp = y; // upper limit
	int prime; // notes the number as a prime number, 1 is no; 0 is yes

	// increment low until it goes through all numbers between them	
	while(low < upp) {
		prime = 0;
		
		// prime is 1 if low is not a prime number
		for(int i = 2; i <= low / 2; i++) {
			if(low % i == 0) {
				prime = 1;
				break;
			}
		}
		
		// prime is 0 if it is a prime number
		if(prime == 0) {
			printf("%d ", low);
		}
		
		// increment low to go to the next number
		low++;
	}
	
	return 0;
} 
