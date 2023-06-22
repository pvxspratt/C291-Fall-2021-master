/*
 * Question 3b
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void) {
    // allocate memory for array of pointers by storing
        // reference in double pointer
    char ** charArray = (char **) malloc(SIZE * sizeof(char*));

    // allocate memory for each array each pointer is pointing to
    for(int i = 0; i < SIZE; i++) {
        *(charArray + i) = (char *) malloc(SIZE * sizeof(char));
    }

    // initialize some values to each array's elements
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE + i; j++) {
            *(*(charArray + i) + j) = 'A' + i * SIZE + j;
        }
    }

    // print values in 2d array format
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%c ", *(*(charArray + i) + j));
        }
        printf("\n");
    }

    // free allocated memory
    free(charArray);
}
