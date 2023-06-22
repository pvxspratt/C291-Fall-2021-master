/*
 * Question 2
 * Author: Phoebe Spratt
 * 12/03/21
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function prototypes
int wordCount(FILE *fPtr);
int lineCount(FILE *fPtr);
int vowelWordCount(FILE *fPtr);
void occurrenceCount(FILE *fPtr);

int main(void) {
    FILE *fPtr;

    fPtr = fopen("data-4.txt", "r");

    if(fPtr == NULL) {
        printf("File does not exist\n");
        return 0;
    }

    printf("Word count: %d\n", wordCount(fPtr));
    printf("Line count: %d\n", lineCount(fPtr));
    printf("Number of words starting with vowels: \n", vowelWordCount(fPtr));
/*
    // back to begining of file
    rewind(fPtr);

    FILE *fPtr2 = fopen("data-4v2.txt", "a+");
    // copy file contents
    copyfile(fptr, fPtr2);

    printf("Occurrences of all words: \n");
    occurrenceCount(fPtr2);

    // get rid of extra FILE
    remove("data-4v2.txt");

    fclose(fPtr2); */
    fclose(fPtr);
}

int wordCount(FILE *fPtr) {
    int count = 0;
    char ch;
    char ch2;

    while ((ch = fgetc(fPtr)) != EOF) {
        ch2 = fgetc(fPtr);

        // if not a space or new line
        if((ch == ' ' && !isspace(ch2)) || ch == '\n' && !isspace(ch2)) {
            count++;
        }

        ungetc(ch2, fPtr);
    }

    return count;
}

int lineCount(FILE *fPtr) {
    int count = 0;
    char ch;

    rewind(fPtr);

    while((ch = fgetc(fPtr)) != EOF) {
        if(ch == '\n') {
            count++;
        }
    }

    return count;
}

int vowelWordCount(FILE *fPtr) {
    int count = 0;
    char ch;

    rewind(fPtr);

    while((ch = fgetc(fPtr)) != EOF) {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            count++;
        }
    }

    return count;
}

void occurrenceCount(FILE *fPtr) {

}
