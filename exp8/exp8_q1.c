#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Values of variables:\n");
    printf("a = %d, b = %.2f, c = %c\n\n", a, b, c);

    printf("Addresses of variables:\n");
    printf("&a = %p, &b = %p, &c = %p\n\n", (void*)&a, (void*)&b, (void*)&c);

    printf("Values stored in pointers:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n\n", (void*)p1, (void*)p2, (void*)p3);

    printf("Values pointed by pointers:\n");
    printf("*p1 = %d, *p2 = %.2f, *p3 = %c\n", *p1, *p2, *p3);

    return 0;
}
