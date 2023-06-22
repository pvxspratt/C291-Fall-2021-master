/*
 * Question 3
 * Author: Phoebe Spratt
 * 12/03/21
*/

#include <stdio.h>

// remove empty line funciton prototype
void removeEmptyLines(FILE *fPtr, char *file);

int main(void) {
    FILE *fPtr = fopen("mergedContents.txt", "w");

    FILE *fPtr1 = fopen("first.txt", "a+");
    FILE *fPtr2 = fopen("second.txt", "a+");
    removeEmptyLines(fPtr1, "first");
    removeEmptyLines(fPtr2, "second");


    // merge the contents of the two files
    char ch1;
    char ch2;

    while((ch1 = fgetc(fPtr1)) != EOF) {
        fputc(ch1, fPtr);
    }

    fclose(fPtr);
    fclose(fPtr1);
    fclose(fPtr2);
}

void removeEmptyLines(FILE *fPtr, char *file) {
    char ch;
    int isEmpty = 0;

    rewind(fPtr);

    FILE *fPtrCopy = fopen("newFile.txt", "w");

    while((ch = fgetc(fPtr)) != EOF) {
        if(ch != 'n') {
            fputc(ch, fPtrCopy);
            isEmpty = 0;
        } else {
            if(isEmpty == 0) {
                fputc('\n', fPtrCopy);
            }

            isEmpty = 1;
        }
    }

    fclose(fPtrCopy);
    rename("newFile.txt", file);
}
