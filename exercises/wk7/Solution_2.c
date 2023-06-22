/*
 * Question 2
 * Author: Phoebe Spratt
 * 11/11/21
*/

#include <stdio.h>

// prototype for each pair function
void AND_pairs(int arr[], int N);
void OR_pairs(int arr[], int N);
void XOR_pairs(int arr[], int N);

int main(void) {
    int N = 0; // size of array
    int arr[75]; // creating initial array

    // user prompt for size of array
    printf("Enter elements of array separated by spaces, enter when done \n");
    do {
        scanf("%d", &arr[N]);
        N++; // increase size
    } while(getchar() != '\n');

    // performing each funciton
    AND_pairs(arr, N);
    OR_pairs(arr, N);
    XOR_pairs(arr, N);
}

// counting pairs where bitwise AND of lsb is 1
void AND_pairs(int arr[], int N) {
    int a = 0, b = 0; // first and second of the pairs
    int count = 0; // number of pairs

    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) && (b & 1)) {
                count += 1;
            }
        }
    }

    printf("Total AND pairs: %d i.e., ", count);
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) && (b & 1)) {
                printf("(%d, %d) ", a, b);
            }
        }
    }

    printf("\n");
}

// counting pairs where bitwise OR of lsb is 1
void OR_pairs(int arr[], int N) {
    int a = 0, b = 0; // first and second of the pairs
    int count = 0; // number of pairs

    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) || (b & 1)) {
                count += 1;
            }
        }
    }

    printf("Total OR pairs: %d i.e., ", count);
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) || (b & 1)) {
                printf("(%d, %d) ", a, b);
            }
        }
    }

    printf("\n");
}

// counting pairs where bitwise XOR of lsb is 1
void XOR_pairs(int arr[], int N) {
    int a = 0, b = 0; // first and second of the pairs
    int count = 0; // number of pairs

    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) && !(b & 1)) {
                count += 1;
            } else if(!(a & 1) && (b & 1)) {
                count += 1;
            }
        }
    }

    printf("Total XOR pairs: %d i.e., ", count);
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            a = arr[i];
            b = arr[j];

            if((a & 1) && !(b & 1)) {
                printf("(%d, %d) ", a, b);
            } else if(!(a & 1) && (b & 1)) {
                printf("(%d, %d) ", a, b);
            }
        }
    }

    printf("\n");
}
