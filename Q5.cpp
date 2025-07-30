#include <stdio.h>

int main(){
    int n, i, l;
    int a[100];
    printf("enter size of array:");
    scanf("%d", &n);
    
	printf("enter elements of array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    l = a[n - 1];
    for (i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = l;
	printf("rotate by one:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}



