/*
 * Question 3a
 * Author: Phoebe Spratt
 * 11/17/21
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int twentyChar = 20; // array to store 20 characters
    char *charPtr;

    // allocate memory
    charPtr = (char *) malloc(twentyChar * sizeof(char));

    // if allocation unsuccesful
    if(charPtr == NULL) {
        fprintf(stderr, "Memoray allocation failed\n");
        exit(1);
    }

    // otherwise,
    // initialize the 20 characters to something and then print them
    // copy string to charPtr first
    strcpy(charPtr, "to laura and phoebe");
    printf("%s\n", charPtr);

    // free allocated memory
    free(charPtr);
}
