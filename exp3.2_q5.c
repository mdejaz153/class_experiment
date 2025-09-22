#include <stdio.h>

int main() {
    int L;
    printf("Enter the limit: ");
    scanf("%d", &L);

    // Check each number up to L
    for (int n = 1; n <= L; n++) {
        int count = 0;  // counts the number of ways n can be expressed as sum of cubes

        // Check all pairs (a, b) with a <= b
        for (int a = 1; a * a * a <= n; a++) {
            for (int b = a; b * b * b <= n; b++) {
                if (a * a * a + b * b * b == n) {
                    count++;
                }
            }
        }

        // If there are at least 2 such pairs, n is a Ramanujan number
        if (count >= 2) {
            printf("%d is a Ramanujan number\n", n);
        }
    }

    return 0;
}
