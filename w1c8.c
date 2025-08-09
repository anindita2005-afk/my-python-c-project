#include <stdio.h>

void main() {
    int n, i, c, w, j;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[100];

    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("frequency count:\n");
    for (i = 0; i < n; i++) {
        if (a[i] != -99999) {
            c = a[i];
            w = 1;
            for (j = i + 1; j < n; j++) {
                if (a[j] == c) {
                    w++;
                    a[j] = -99999;
                }
            }
            printf("element: %d frequency: %d\n", c, w);
        }
    }

}

