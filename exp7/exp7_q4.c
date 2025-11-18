#include <stdio.h>

union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter your present address: ");
    gets(a.hostel_address);

    printf("\nPresent Address: %s\n", a.hostel_address);

    return 0;
}
