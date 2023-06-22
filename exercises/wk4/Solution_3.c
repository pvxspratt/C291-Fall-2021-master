/*
 * Question 3
 * Author: Phoebe Spratt
 * 09/20/21
*/

#include <stdio.h>
#include <string.h> // for strcat() function

int main(void) {
	char string1[20]; // initialize string1/array of chars
	int len1; // length of string 1
	char string2[20]; // initialize string2/array of chars
	int len2; // length of string 2

	// prompts user to enter string and assign to string 1 or 2
	printf("%s", "Enter first string: ");
	scanf("%s", string1);
	printf("%s", "Enter second string: ");
	scanf("%s", string2);
	
	// finding the length of the string without using strlen
	for(int i = 0; string1[i] != '\0'; i++) {
		len1 = i + 1;
	} 

	for(int i = 0; string2[i] != '\0'; i++) {
		len2 = i + 1;
	}

	// printing the lengths
	printf("Length of first string: %d\n", len1);
	printf("Length of second string: %d\n", len2);


	// printing each character of first string on new lines
	for(int i = 0; i < len1; i++) {
		printf("%c\n", string1[i]);
	}
	

	// concatenating both strings and printing it
	strcat(string1, string2); // stores concatenated strings in string1
	printf("Both strings concatenated: %s\n", string1);

}

