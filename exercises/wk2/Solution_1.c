/*
 * Problem 1
 * Author: Phoebe Spratt
 * 09/08/21
*/

#include <stdio.h>

int main(void) {
  int operation;
  int x; // first operand
  int y; // second operand
  int output;
  printf("Enter the operation you want to perform ('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");

  // while input is not Q for quit
  while((operation = getchar()) != 'Q') {
    switch(operation) {
      case '+': 
        printf("Enter your operands: \n");
        scanf("%d %d", &x, &y); // read operands
        output = x + y;
        printf("Your output: %d\n", output);
	printf("\nEnter another operation('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");
        break;
      case '-':
        printf("Enter your operands: \n");
        scanf("%d %d", &x, &y); // read operands
        output = x - y;
        printf("Your output: %d\n", output);
	printf("\nEnter another operation('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");
        break;
      case '*':
        printf("Enter your operands: \n");
        scanf("%d %d", &x, &y); // read operands
        output = x * y;
        printf("Your output: %d\n", output);
	printf("\nEnter another operation('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");
        break;
      case '/':
        printf("Enter your operands: \n");
        scanf("%d %d", &x, &y); // read operands
        if(y == 0) { // makes sure you're not dividing by zero
          printf("can't divide by zero\n");
        } else {
          output = x / y;
          printf("Your output: %d\n", output);
        }
	printf("\nEnter another operation('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");
        break;
      case '\n':
        break;
      default:
        printf("Enter a valid operation\n");
	printf("\nEnter another operation('+' for addition, '-' for subtraction, '*' for multiplication, '/' for division, 'Q' to quit)\n");
        break;
    } // end switch
  } // end while
  printf("Thanks for using my calculator!\n");
}
