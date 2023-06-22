/*
 * Question 1a
 * Author: Phoebe Spratt
 * 11/18/21
*/

// I couldn't get my gdb working so I'll figure it out and submit this again
    // for my makeup assignment, but this is the correct code

#include <stdio.h>

int sum(int n) {
    int i;
    int result = 0;
    for (i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("Sum of n natural numbers is: %d\n", sum(n));
    return 0;
}
