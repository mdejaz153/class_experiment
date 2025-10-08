/*Develop a recursive function FIBO (num) that accepts an integer argument. Write 
a C program that invokes this function to generate the Fibonacci sequence up to 
num.*/

#include <stdio.h>

// Recursive function to generate Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int num, i;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Sequence up to %d terms:\n", num);
    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    printf("\n");
    return 0;
}
