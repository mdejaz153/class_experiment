#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void displayBook(struct Book b) {
    printf("\nBook ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b;

    printf("Enter book id: ");
    scanf("%d", &b.book_id);
    printf("Enter title: ");
    scanf("%s", b.title);
    printf("Enter author: ");
    scanf("%s", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    displayBook(b);

    return 0;
}
