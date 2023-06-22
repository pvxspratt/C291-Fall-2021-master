/*
 * Question 2b
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // array of two to allocate memory for 2 double values
    int twoDoubles = 2;
    int *ptr;

    // allocate memory for double
    ptr = (int *) malloc(twoDoubles * sizeof(double));

    if(ptr == NULL){
		fprintf(stderr, "Memory allocation of two double values failed\n");
		exit(1);
	}
	else{
		printf("Memory allocation of two double values successful\n");
	}

    // free the allocated memory
    free(ptr);
}
