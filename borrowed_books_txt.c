/*
Name:Masese Doris
Reg No:PA106/G/28790/25
Description:A C program that allows the librarian to enter book titles and store 
each title in a text file named borrowed_books_txt.
*/

// borrowed_books.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a"); // open in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);

        // Write to file
        fprintf(fp, "%s", title);
        printf("Book title successfully stored!\n");

        printf("Add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // consume newline
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All titles saved in borrowed_books.txt\n");
    return 0;
}