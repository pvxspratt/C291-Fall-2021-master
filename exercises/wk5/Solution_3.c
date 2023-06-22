/*
 * Question 3
 * Author: Phoebe Spratt
 * 10/04/21
*/

#include <stdio.h>
#include <string.h>
#define SIZE 30

// alphabetize string function prototype
void alpha(char str[]);

// turn char into other char function prototype
// turn all instances of c1 to c2, and c2 to c1
void turnInto(char str[], char c1, char c2);

int main(void) {
    char w1[SIZE];
    char w2[SIZE];

    // user prompts
    printf("%s", "word1 = ");
    scanf("%s", w1);

    printf("%s", "word2 = ");
    scanf("%s", w2);

    if(strlen(w1) != strlen(w2)) {
      printf("Not convertible\n");
    } else {
      // alphabetize to compare the words with eachother
      alpha(w1);
      alpha(w2);

      if(strcmp(w1, w2) == 0) { // if, when in alphabetical order, w1 = w2
        printf("%s", "convertible");
      } else if(strcmp(w1, w2) < 0) {
        printf("%s", "less than");
        // need to figure out how to use turnInto correctly
      } else if(strcmp(w1, w2) > 0) {
        printf("%s", "greater than");
        // need to figure out how to use turnInto correctly
      }
    }

    printf("\n");
    turnInto(w1, 'a', 'b');
} // end main


// function to transform every occurence of a certain character to another, and
  // vice versa. So, basically turn all instances of c1 to c2, and c2 to c1
void turnInto(char str[], char c1, char c2) {
  int len = strlen(str); // length of string

  for(int i = 0; i < len; i++) {
    if(str[i] == c1) {
      str[i] = c2; // replacing c1 with c2
    }

    if(str[i] == c2) {
      str[i] = c2; // replacing c2 with c1
      // this part isn't working though
    }
  }

  printf("%s\n", str);
}

// alphabetize the chars in the string by comparing ASCII values
void alpha(char str[]) {
  char temp; // temporary holder for the char
  int len = strlen(str); // length of inputted string

  for(int i = 0; i < len - 1; i++) {
    for(int j = i + 1; j < len; j++) {
      if(str[i] > str[j]) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}


