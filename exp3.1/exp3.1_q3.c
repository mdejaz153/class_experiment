/* 
3. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) 
   are collinear or not.
*/

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int area;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    // Calculate determinant (2 * area)
    area = x1 * (y2 - y3) + 
           x2 * (y3 - y1) + 
           x3 * (y1 - y2);

    if (area == 0)
        printf("\nThe three points are Collinear.\n");
    else
        printf("\nThe three points are NOT Collinear.\n");

    return 0;
}
