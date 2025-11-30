#include <stdio.h>

#define ADD(a,b) (a + b)
#define SUB(a,b) (a - b)
#define MUL(a,b) (a * b)
#define DIV(a,b) (a / b)

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", ADD(a, b));
    printf("Subtraction = %d\n", SUB(a, b));
    printf("Multiplication = %d\n", MUL(a, b));
    printf("Division = %d\n", DIV(a, b));

    return 0;
}
