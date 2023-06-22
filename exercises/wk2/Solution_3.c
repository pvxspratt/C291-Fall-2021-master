/*
 * Problem 3
 * Author: Phoebe Spratt
 * 09/08/21
*/

#include <stdio.h>

int main(void) {
  int input;
  int output = 0;
  int counter = 1;

  scanf("%d", &input);

  while(output <= 100) {
    printf("%d ", output);
    output = counter * input;
    counter++;
  } // end while

/* I couldnt figure out how to make the first number
 	that was printed be the one inputed at first
	when I did it ignored the less than or equal
	to 100 and that was wrong too
*/

}
