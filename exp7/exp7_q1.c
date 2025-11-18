#include <stdio.h>

struct complex {
    float real, imag;
};

struct complex readComplex() {
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplex(struct complex c) {
    printf("%.1f + %.1fi\n", c.real, c.imag);
}

struct complex addComplex(struct complex c1, struct complex c2) {
    struct complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

struct complex subComplex(struct complex c1, struct complex c2) {
    struct complex c;
    c.real = c1.real - c2.real;
    c.imag = c1.imag - c2.imag;
    return c;
}

int main() {
    struct complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();
    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nSum = ");
    writeComplex(sum);

    printf("Difference = ");
    writeComplex(diff);

    return 0;
}
