/*
 * Question 1
 * Author: Phoebe Spratt
 * 10/24/21
*/

#include <stdio.h>

// reverse function prototype
void reverse(char * sPtr);

int main(void) {
        // creating string as char array
        char string[30];
	char *stringPtr = string; // pointer to string array
	int length = 0; // for calculating length

	// user prompt for input
	printf("%s", "Enter a string: ");
	scanf("%s", string);

	// reversing the string
	printf("%s", "String in reverse order: "); 
	reverse(string);
	printf("\n");

	
	// calculating the length of the string
	for(int i = 0; stringPtr[i] != '\0'; i++) {
		++(*stringPtr);
		length++;
	}

	printf("Length of string: %d\n", length);
} // end main

// using recursion to print chars in a string in reverse
void reverse(char * sPtr) {
	if('\0' == sPtr[0]) { // if it is the end of the string
		return;
	} else { // going through chars of string
		// using pointers to pass address to the recursive step
		reverse(&sPtr[1]);

		// displaying character
		printf("%c", *sPtr);
	}
}

