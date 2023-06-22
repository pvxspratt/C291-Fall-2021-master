/*
 * Question 2c
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 5; // array of size 5
    int *ptr;

    // allocate the Memory
    // allocated memory = 5 * size of each int
    ptr = (int *) malloc(num * sizeof(int));

    if(ptr == NULL){
		fprintf(stderr, "Memory allocation of 5 integers failed\n");
		exit(1);
	}
	else{
		printf("Memory allocation of 5 integers successful\n");
	}

    // initialize the 5 integers to some values
    for(int i =0; i < num; i++) {
        *(ptr + i) = i;
    }

    // print the values
    for(int i = 0; i < num; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    // free allocated memory
    free(ptr);
}
