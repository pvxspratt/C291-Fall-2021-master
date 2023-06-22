/*
 * Question 4
 * Author: Phoebe Spratt
 * 10/24/21
*/

#include <stdio.h>
#include <stdlib.h>

// sorting functions prototypes
void sortAscending(int *array, int size);
void sortDescending(int *array, int size);

int main(void) {
  int *array; // array to be sorted
  int size; // size of array

  // prompts user for size of array
  printf("Enter size of array: ");
  scanf("%d", &size);

  // prompting user to enter elements for the array
  printf("Input array elements: ");
  array = malloc(size * sizeof(int));

  for(int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  free(array);

  // printing array for testing
  /*
  for(int i = 0; i < size; i++) {
    printf("%d ", *(array + i));
  } */
  printf("\n");

  sortAscending(array, size);
  // array is now in ascending order
  sortDescending(array, size);
} // end main

// sort the array in ascending order
void sortAscending(int *array, int size) {
  int temp;

  // comparing the ith element to all the others and finds the smallest
  for(int i = 0; i < size; i++) {
    // comparing the ith element with the elements that come after it
    for(int j = i + 1; j < size; j++) {
      if(*(array + i) > *(array + j)) {
        temp = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = temp;
      }
    }
  }

  // printing array
  printf("Array in ascending order: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", *(array + i));
  }
  printf("\n");
}

void sortDescending(int *array, int size) {
  int temp;

  // comparing the ith element to all the others and finds the largest
  for(int i = 0; i < size; i++) {
    // comparing the ith element with the elements that come after it
    for(int j = i + 1; j < size; j++) {
      if(*(array + i) < *(array + j)) {
        temp = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = temp;
      }
    }
  }

  // printing array
  printf("Array in descending order: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", *(array + i));
  }
  printf("\n");
}

