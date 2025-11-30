#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Left Shift (n << 1) = %d\n", n << 1);
    printf("Right Shift (n >> 1) = %d\n", n >> 1);

    return 0;
}
