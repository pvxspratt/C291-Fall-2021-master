/*
 * Question 2
 * Author: Phoebe Spratt
 * 10/24/21
*/

#include <stdio.h>

// operation function prototypes
int sum(int *a, int *b);
int diff(int *a, int *b);
int mult(int *a, int *b);
int divide(int *a, int *b);

int main(void) {
  int opp; // opperation
  int a;
  int b;
  // user's choice of opperation prompt
  printf("Enter 0 to add numbers, 1 to subtract numbers, 2 to multiply numbers, 3 to divide numbers, 4 or greater to quit\n");
  scanf("%d", &opp);

  while(opp >= 0 && opp < 4) {
    switch(opp) {
      case 0:
        printf("Enter operands: ");
        scanf("%d %d", &a, &b);

        // passing a and b as pointers to respective function
        printf("%d\n", sum(&a, &b));

        printf("0 = +, 1 = -, 2 = *, 3 = /, 4+ to quit\n");
        scanf("%d", &opp);
        break;
      case 1:
        printf("Enter operands: ");
        scanf("%d %d", &a, &b);

        // passing a and b as pointers to respective function
        printf("%d\n", diff(&a, &b));

        printf("0 = +, 1 = -, 2 = *, 3 = /, 4+ to quit\n");
        scanf("%d", &opp);
        break;
      case 2:
        printf("Enter operands: ");
        scanf("%d %d", &a, &b);

        // passing a and b as pointers to respective function
        printf("%d\n", mult(&a, &b));

        printf("0 = +, 1 = -, 2 = *, 3 = /, 4+ to quit\n");
        scanf("%d", &opp);
        break;
      case 3:
        printf("Enter operands: ");
        scanf("%d %d", &a, &b);

        // passing a and b as pointers to respective function
        printf("%d\n", divide(&a, &b));

        printf("0 = +, 1 = -, 2 = *, 3 = /, 4+ to quit\n");
        scanf("%d", &opp);
        break;
      default:
        printf("0 = +, 1 = -, 2 = *, 3 = /, 4+ to quit\n");
        scanf("%d", &opp);
        break;
    } // end switch
  } // end while
  printf("Thanks for using my calculator!\n");
} // end main

// Functions

// passing the variables as pointers and returning the sum of them
int sum(int *a, int *b) {
  // finding sum of *a and *b
  *a = *a + *b;
  return *a;
}

// pass variables as pointers and return difference between them
int diff(int *a, int *b) {
  *a = *a - *b;
  return *a;
}

// passing the variables as pointers and returning the product of them
int mult(int *a, int *b) {
  *a = *a * *b;
  return *a;
}

// passing the variables as pointers and returning a / b
int divide(int *a, int *b) {
  *a = *a / *b;
  return *a;
}
