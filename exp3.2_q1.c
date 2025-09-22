/*
1. WAP to enter numbers till the user wants. At the end, it should display
   the count of positive, negative, and Zeroes entered.
*/

#include <stdio.h>

int main() {
    int n, i, num, pos = 0, neg = 0, zero = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nCount of Positive numbers = %d", pos);
    printf("\nCount of Negative numbers = %d", neg);
    printf("\nCount of Zeroes = %d\n", zero);

    return 0;
}
