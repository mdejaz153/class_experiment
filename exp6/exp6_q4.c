/*Develop a C function ISPRIME (num) that accepts an integer argument and 
returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes 
this function to generate prime numbers between the given ranges.*/

#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("\nPrime numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
