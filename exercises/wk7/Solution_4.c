/*
 * Question 4
 * Author: Phoebe Spratt
 * 11/11/21
*/

#include <stdio.h>

int main(void) {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    N = N - 1; // makes it so making the array isn't the actual size + 1

    // create array of size N + 1, which is just the size that was inputted
    int arr[N + 1];

    // user input for the array
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < N + 1; i++) {
        scanf("%d", &arr[i]);

        // if user input is out of the 1 - N range,
            // have them reenter value and decrement i
        if((arr[i] < 1) || (arr[i] > N)) {
            printf("make sure input is between 1 and %d\n", N);
            i--;
        }
    }

    // looping through array using bitwise ^ operator to find repeated number
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N + 1; j++) {
            if(!(arr[i] ^ arr[j])) {
                printf("Repeating number: %d\n", arr[i]);
            }
        }
    }
}
