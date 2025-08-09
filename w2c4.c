#include <stdio.h>

int main() {
    int r, c;

   
    printf("number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int t[c][r];

   
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

