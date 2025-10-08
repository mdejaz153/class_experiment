/*Develop a function REVERSE (str) that accepts a string argument. Write a C 
program that invokes this function to find the reverse of a given string. */

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin) in modern compilers

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
