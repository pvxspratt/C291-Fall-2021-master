/*
 * Question 1
 * Author: Phoebe Spratt
 * 12/03/21
*/

#include <stdio.h>

// function prototypes
void newStudentDetails(FILE *fPtr);
void searchForStudent(FILE *fPtr);
void displayAllStudents(FILE *fPtr);
void removeStudent(FILE *fPtr);

// enumeration constants that represent the menu options
enum menuOptions {
    new = 1, search, display, removeStudentOption, exitMenu
};

int main(void) {
    FILE *sfPtr;

    enum menuOptions mOptions;

    do {
        sfPtr = fopen("studentInfo.txt", "a+");
        if(sfPtr == NULL) {
            printf("File could not be opened");
        } else {
            // menu options and taking user input
            printf("1.  Enter student details.\n");
            printf("2.  Search for a student.\n");
            printf("3.  Display the file contents.\n");
            printf("4.  Remove a student.\n");
            printf("5.  Exit\n");
            printf("Please enter your choice: \n");
            scanf("%d", &mOptions);

            printf("\n\n");

            if(mOptions == new) {
                newStudentDetails(sfPtr);
            } else if(mOptions == search) {
                searchForStudent(sfPtr);
            } else if(mOptions == display) {
                displayAllStudents(sfPtr);
            } else if(mOptions == removeStudentOption) {
                removeStudent(sfPtr);
            }

            printf("\n");
        }
    } while(mOptions != exitMenu);
} // end main


void newStudentDetails(FILE *fPtr) {
    char studentName[30];
    int studentid;
    char course[50];

    // prompting user to input the details of the student
    printf("Enter student's name: ");
    scanf("%s", studentName);
    printf("Enter student id: ");
    scanf("%d", &studentid);
    printf("Course taken: ");
    scanf("%s", course);

    // saving as "id name course" in the file
    fprintf(fPtr, "%d %s %s\n", studentid, studentName, course);
    printf("Student details saved\n");
    fclose(fPtr);
}

void searchForStudent(FILE *fPtr) {
    // make file pointer go back to the begining of the file
    rewind(fPtr);

    int id;
    char studentName[30];
    int studentId;
    char course[50];
    char student[100];

    int studentExists = 0;

    printf("Enter id of the student: ");
    scanf("%d", &id);

    while(fgets(student, 100, fPtr)) {
        sscanf(student, "%d %s %s", &studentId, studentName, course);

        if(id == studentId) {
            printf("%d %s %s\n", studentId, studentName, course);
            studentExists = 1;
        }
    }

    // if student does not exist
    if(studentExists == 0) {
        printf("Student does not exist\n");
    }

    // close file
    fclose(fPtr);
}

void displayAllStudents(FILE *fPtr) {
    // make file pointer go back to the begining of the file
    rewind(fPtr);

    char studentName[30];
    int studentId;
    char course[50];
    char student[100];

    while(fgets(student, 100, fPtr)) {
        sscanf(student, "%d %s %s", &studentId, studentName, course);
        printf("%d %s %s\n", studentId, studentName, course);
    }
    
    // close file
    fclose(fPtr);
}

void removeStudent(FILE *fPtr) {
    // make file pointer go back to the begining of the file
    rewind(fPtr);

    int id;
    char studentName[30];
    int studentId;
    char course[50];
    char student[100];

    int studentExists = 0;

    printf("Enter id of student to remove: ");
    scanf("%d", &id);

    FILE *fPtr2;
    fPtr2 = fopen("newStudentInfo.txt", "w");

    while(fgets(student, 100, fPtr)) {
        sscanf(student, "%d %s %s", &studentId, studentName, course);

        if(id != studentId) {
            fprintf(fPtr2, "%d %s %s\n", studentId, studentName, course);
        } else { // if student does not exist
            studentExists = 1;
        }
    }

    if(studentExists == 0) {
        printf("Student does not exist\n");
    } else {
        printf("Student is now removed\n");
    }

    fclose(fPtr);
    fclose(fPtr2);

    // remove old file and rename other as it
    remove("studentInfo.txt");
    rename("newStudentInfo.txt", "studentInfo.txt");
}
