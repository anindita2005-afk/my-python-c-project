#include <stdio.h>

int main() {
    int n;

    printf("size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    int r[n][n];

    printf("Enter elements\n:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r[j][n - 1 - i] =a[i][j];
        }
    }


    printf("after 90 degree rotation:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}

