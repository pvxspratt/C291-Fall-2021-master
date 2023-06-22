/*
 * Question 1
 * Author: Phoebe Spratt
 * 09/20/21
*/

#include <stdio.h>

int main(void) {
	int size; // size of the array
	int max; // max element of array
	int min; // min element of array
	int sum; // sum of all elements in array	

	// user input to get size of array
	printf("%s", "Enter the size of the array: ");
	scanf("%d", &size);

	int array[size]; // create an array of that size
	
	printf("Enter %d elements to be stored: \n", size);
	// initialize the elements of the array from input
	for(int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}


	// max element
	max = array[0]; // initialize first element as maximum

	for(int i = 1; i < size; i++) {
		if(array[i] > max) {
			max = array[i];
		}
	}

	printf("Maximum element is: %d\n", max);


	// min element
	min = array[0]; // initialize first element as minimum

	for(int i = 1; i < size; i++) {
		if(array[i] < min) {
 			min = array[i];
		}
	}

	printf("Minimum element is: %d\n", min);


	// sum of all the elements
	for(int i = 0; i < size; i++) {
		sum += array[i];
	}
		
	printf("Sum of elements of array is: %d\n", sum);

}
