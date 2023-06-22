/*
 * Problem 2
 * Phoebe Spratt
*/

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int result = 0;

  printf("Enter first number: \n");
  scanf("%d", &a);
  printf("Enter second number: \n");
  scanf("%d", &b);

  result = (a + b) * (a - b);
  printf("(a + b)(a - b) = %d\n", result);

}
