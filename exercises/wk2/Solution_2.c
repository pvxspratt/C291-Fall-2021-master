/*
 * Problem 2: For here or to-go
 * Author: Phoebe Spratt
 * 09/08/21
*/

#include <stdio.h>
#include <stdbool.h> // bool, true, and false
#include <string.h> // for strcpy

int main(void) {
  char dish[10];
  int inDish;

  bool hereOrToGo; // 0 for here, 1 for to-go
  int hereGoInt; // 0 or 1

  printf("Welcome to my restaurant! What do you want? 'B' for burritos, 'T' for tacos, or 'N' for nachos \n");
 // scanf("%s", inDish);

  switch(inDish = getchar()) {
    case 'B':
      strcpy(dish, "burritos");
      break;
    case 'T':
      strcpy(dish, "tacos");
      break;
    case 'N':
      strcpy(dish, "nachos");
      break;
    case '\n':
      break;
    default:
      printf("that's not on the menu\n");
      break;
  } // end switch

  
  // prompt here or to-go
  printf("For here or to-go? 0 for here, 1 for to-go \n");
  scanf("%d", &hereGoInt);

  switch(hereGoInt) {
    case 0:
      hereOrToGo = false;
      break;
    case 1:
      hereOrToGo = true;
      break;
    default:
      printf("that's not an option\n");
      break;
  } // end switch

  
  // check if to go ot here and then give last message
  if(hereOrToGo) {
    printf("You've ordered %s to-go\n", dish);
  } else {
    printf("You've ordered %s for here\n", dish);
  }

}
