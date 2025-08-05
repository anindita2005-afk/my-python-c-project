#include <stdio.h>

int main() {
    int n;
    int Iy = 1; 

    printf("size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) {
                Iy = 0;
                break;
            } else if (i != j && a[i][j] != 0) {
                Iy = 0;
                break;
            }
        }
        if (!Iy) break;
    }

    if (Iy)
        printf("identity matrix");
    else
        printf("Not an identity matrix");

    return 0;
}

