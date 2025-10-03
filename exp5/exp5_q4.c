/* 4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. 
Read matrix A and matrix B in row major order respectively. Print both the input matrices and 
resultant matrix with suitable headings and output should be in matrix format only. 
Program must check the compatibility of orders of the matrices for multiplication. 
Report appropriate message in case of incompatibility.*/

#include <stdio.h>
int main() {
    int m, n, p, q, i, j, k;
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    int B[p][q];
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if(n != p) {
        printf("Matrix multiplication not possible. Incompatible dimensions.\n");
        return 0;
    }

    int C[m][q];
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
