/*
 * Question 3
 * Author: Phoebe Spratt
 * 11/11/21
*/

#include <stdio.h>

int main(void) {
    unsigned int n;
    int count = 0;

    // user input of the integer
    printf("n = ");
    scanf("%d", &n);

    while(n) { // looping through binary representation of n
        // check value n using AND to see if it is 1(bit is set)
        if((n & 1) == 1) {
            count++;
        }

        // right shift to go to next n
        n >>= 1;
    }

    printf("Number of set bits: %d\n", count);
}
