/*
 * Question 3c
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void) {
    // allocate memory for total size of 25 for the array
    char * charArray = (char *) malloc(SIZE * SIZE * sizeof(char));

    if(charArray == NULL) {
        fprintf(stderr, "Memory allocation falied\n");
    }

    // used nested loop and asign some values
    // from class code: i*M+j will translate the 2d indices to 1d
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            *(charArray + i * SIZE + j) = 'A' + i * SIZE + j;
        }
    }

    // print values
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%c ", *(charArray + i * SIZE + j));
        }
        printf("\n");
    }

    // free allocated memory
    free(charArray);
}
