/*
 * Question 1
 * Author: Phoebe Spratt
 * 11/08/21
*/

#include <stdio.h>
#include <stdlib.h>

// book structure definition with details as members
typedef struct {
    char title[30];
    char author[30];
    char genre[30];
    //int id;
    char id[30]; // string representation of a number
} Book;

// library_books function prototype
void libraryBooks(Book * newBooks);

int main(void) {
    // array of three new books
    Book newBooks[3];

    int bookID;

    for(int i = 0; i < 3; i++) {
        Book thisBook;

        //printf("Enter book %d details: \n", i);
        printf("Book title: ");
        fgets(thisBook.title, 30, stdin);
        //scanf("%[^\n]", thisBook.title);
        printf("Book author: ");
        fgets(thisBook.author, 30, stdin);
        //scanf("%[^\n]]", thisBook.author);
        printf("Book genre: ");
        fgets(thisBook.genre, 30, stdin);
        //scanf("%[^\n]]", thisBook.genre);
        printf("Book id: ");
        fgets(thisBook.id, 30, stdin);
        //scanf("%d", &bookID);
        //thisBook.id = bookID;
        printf("\n");

        newBooks[i] = thisBook;
    }

    libraryBooks(newBooks);
} // end main


// passing book details to library_books function
//      will print details in ascending order of book id
void libraryBooks(Book * const newBooks) {
    // print newBooks[idB3].details
    printf("Book 1 title: %s", newBooks[0].title);
    printf("Book 1 author: %s", newBooks[0].author);
    printf("Book 1 genre: %s", newBooks[0].genre);
    //printf("Book 1 id: %d\n", newBooks[0].id);
    printf("Book 1 id: %s\n", newBooks[0].id);

    printf("Book 2 title: %s", newBooks[1].title);
    printf("Book 2 author: %s", newBooks[1].author);
    printf("Book 2 genre: %s", newBooks[1].genre);
    //printf("Book 2 id: %d\n", newBooks[1].id);
    printf("Book 2 id: %s\n", newBooks[1].id);

    printf("Book 3 title: %s", newBooks[2].title);
    printf("Book 3 author: %s", newBooks[2].author);
    printf("Book 3 genre: %s", newBooks[2].genre);
    //printf("Book 3 id: %d\n", newBooks[2].id);
    printf("Book 3 id: %s\n", newBooks[2].id);

}
