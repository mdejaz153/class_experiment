/* Develop a recursive and non-recursive function FACT(num) to find the factorial of 
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n
1). Using this function, write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages. */

#include <stdio.h>

// Recursive factorial function
int FACT(int num) {
    if (num == 0)
        return 1;
    else
        return num * FACT(num - 1);
}

// Non-recursive factorial function
int FACT_NR(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    float nCr;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    // Using recursive FACT()
    nCr = (float)FACT(n) / (FACT(r) * FACT(n - r));
    printf("\nUsing Recursive FACT():\n");
    printf("Binomial Coefficient (nCr) = %.2f\n", nCr);

    // Using non-recursive FACT_NR()
    nCr = (float)FACT_NR(n) / (FACT_NR(r) * FACT_NR(n - r));
    printf("\nUsing Non-Recursive FACT_NR():\n");
    printf("Binomial Coefficient (nCr) = %.2f\n", nCr);

    printf("\nTabulated Results for Different n and r:\n");
    printf("------------------------------------------\n");
    printf(" n\t r\t nCr\n");
    printf("------------------------------------------\n");
    for (n = 0; n <= 5; n++) {
        for (r = 0; r <= n; r++) {
            nCr = (float)FACT_NR(n) / (FACT_NR(r) * FACT_NR(n - r));
            printf(" %d\t %d\t %.0f\n", n, r, nCr);
        }
    }

    return 0;
}
