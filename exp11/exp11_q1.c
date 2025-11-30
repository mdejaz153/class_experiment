#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("A & B = %d\n", a & b);
    printf("A | B = %d\n", a | b);
    printf("~A = %d\n", ~a);

    return 0;
}
