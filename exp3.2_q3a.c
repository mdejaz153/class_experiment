/*
  1
 2 3
4 5 6
*/
#include <stdio.h>

int main() {
    int n, i, j, k, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // print spaces
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
