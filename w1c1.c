#include <stdio.h>

void main() {
    int n, i, element;
    printf("enter size of array:");
    scanf("%d", &n);
    int a[100];
	printf("enter elements of array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	printf("element to insert:");
    scanf("%d", &element);
    a[n] = element;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}

