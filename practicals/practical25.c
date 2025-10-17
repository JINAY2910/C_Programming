#include <stdio.h>
#include <string.h>
union library {
    int accession_number;
    char title[100];
    char author[100];
    float price;
    int is_issued;
};
int main() {
    union library book;
    printf("Enter accession number: ");
    scanf("%d", &book.accession_number);
    printf("Accession Number: %d\n", book.accession_number);
    printf("Enter title of the book: ");
    getchar();
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0;
    printf("Title: %s\n", book.title);
    printf("Enter author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0;
    printf("Author: %s\n", book.author);
    printf("Enter price of the book: ");
    scanf("%f", &book.price);
    printf("Price: %.2f\n", book.price);
    printf("Enter 1 if the book is issued, 0 otherwise: ");
    scanf("%d", &book.is_issued);
    if (book.is_issued == 1) {
        printf("Status: Issued\n");
    } else {
        printf("Status: Not issued\n");
    }
return 0;
}
