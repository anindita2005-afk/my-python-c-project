#include <stdio.h>

int main() {
    int n, i, m;
    int a[100];
    printf("enter size of array:");
    scanf("%d", &n);
    
	printf("enter elements of array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    m = a[0];
    for (i = 1; i < n; i++){
        if (a[i] > m)
            m = a[i];
    }

    printf("largest element= %d", m);
    return 0;
}

