/*WAP to take check if the triangle is valid or not. If the validity is established, do 
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of 
the triangle as input from a user.*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.\n");

        // Check type
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.\n");
        }
        else if ((a * a + b * b == c * c) || 
                 (a * a + c * c == b * b) || 
                 (b * b + c * c == a * a)) {
            printf("It is a Right-Angle Triangle.\n");
        }
        else {
            printf("It is a Scalene Triangle.\n");
        }
    }
    else {
        printf("Triangle is NOT valid.\n");
    }

    return 0;
}
