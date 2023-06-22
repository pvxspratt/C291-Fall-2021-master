/*
 * Question 2a
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 1; // array of size 1 to hold one integer value
    int *ptr;

    // allocate the memory of integer value
    ptr = (int *) malloc(num * sizeof(int));

    // check if allocation worked
    if(ptr == NULL) {
        fprintf(stderr, "Memory allocation of one integer value failed\n");
        exit(1);
    } else {
        printf("Memory allocation of one integer value successful\n");
    }

    // free the allocated memory
    free(ptr);
}
