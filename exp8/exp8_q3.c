#include <stdio.h>

void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;
    *y = *y + 5.5;
    *z = *z + 1;
}

int main() {
    int a = 20;
    float b = 12.5;
    char c = 'A';

    printf("Before modification:\n");
    printf("a = %d, b = %.2f, c = %c\n\n", a, b, c);

    modifyValues(&a, &b, &c);

    printf("After modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}
