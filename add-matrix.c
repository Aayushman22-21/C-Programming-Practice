#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Input elements for first matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for second matrix
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding two matrices
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the result
    printf("\nSum of two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}
