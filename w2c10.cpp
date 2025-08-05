#include <stdio.h>

int main() {
    int n;
    printf("size of square matrix : ");
    scanf("%d", &n);

    int a[n][n];
    int i = n - 1; 
    int j = 0;
    int c = 0;
    printf("Enter elements:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    while (i >= 0 && j < n) {
        if (a[i][j] == 0) {
            c += (n - j);
            i--; 
        } else {
            j++; 
        }
    }

    printf("no of zeroes: %d", c);

    return 0;
}

