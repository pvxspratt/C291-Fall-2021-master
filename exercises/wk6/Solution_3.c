/*
 * Question 3
 * Author: Phoebe Spratt
 * 10/24/21
*/

#include <stdio.h>

// swap function prototype
void swap(int *aPtr, int *bPtr);

int main(void) {
	int a; // first number
	int b; // second number

	// user input prompt
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("a = %d\nb = %d\n", a, b);

	// swapping the two numbers by passing the addresses of them
	swap(&a, &b);

	printf("Numbers after swapping\n");
	printf("a = %d\nb= %d\n", a, b);
} // end main


// swapping the two numbers using pass-by-reference with pointers
// for a and b
void swap(int *aPtr, int *bPtr) { 
	int tempAPtr = *aPtr; // temp ptr for the second swap

  	// swapping them by assigning the addresses of each to the other
	*aPtr = *bPtr;
	*bPtr = tempAPtr;
}
