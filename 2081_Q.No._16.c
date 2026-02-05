/*
2081 Q.No. 16
Write a C program that uses structures to represent details of five books (title, author, publisher and price) and prints them out.
*/

#include <stdio.h>

// Define a structure to hold book details
struct Book {
    char title[50];
    char author[30];
    char publisher[30];
    float price;
};

int main() {
    struct Book books[5]; // Array for 5 books
    int i;
    
    // Input details for each book
    for (i = 0; i < 5; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);      // Input title
        printf("Author: ");
        scanf("%s", books[i].author);     // Input author
        printf("Publisher: ");
        scanf("%s", books[i].publisher);  // Input publisher
        printf("Price: ");
        scanf("%f", &books[i].price);     // Input price
        printf("\n");
    }
    
    // Display details of all books
    printf("\nDetails of the Books:\n");
    printf("Title\t\tAuthor\t\tPublisher\tPrice\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%s\t%s\t%.2f\n", books[i].title, books[i].author, books[i].publisher, books[i].price);
    }
    
    return 0;
}
