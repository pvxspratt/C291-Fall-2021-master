/* 
 * Problem 1 
 * Author: Phoebe Spratt
 * 09/01/21
*/

#include <stdio.h>

int main(void) {
  int age = 0;
  char name[12];
  char city[12];
  printf("Enter your name and press ENTER: ");
  scanf("%s", name);
  printf("Enter the city in which you live, then ENTER: ");
  scanf("%s", city);
  printf("Enter your age and press ENTER: ");
  scanf("%d", &age);  
  
  printf("Hello: WElcome to C291!\n");
  printf("This is %s\n", name);
  printf("I live in %s\n", city);
  printf("I am %d\n", age);
  return(0); 
}
