#include <stdio.h>

int main() {
    int a = 5;
    float b = 10.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original Addresses:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n\n", (void*)p1, (void*)p2, (void*)p3);

    // Increment pointers
    p1++;
    p2++;
    p3++;

    printf("After Increment:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n\n", (void*)p1, (void*)p2, (void*)p3);

    // Decrement pointers
    p1--;
    p2--;
    p3--;

    printf("After Decrement (Back to Original):\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", (void*)p1, (void*)p2, (void*)p3);

    return 0;
}
