#include <stdio.h>

int main(){
    int n, i, c=0;
    int a[100];
    printf("enter size of array:");
    scanf("%d", &n);
    
	printf("enter elements of array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[c++] = a[i];
        }
    }

    while (c < n) {
        a[c++] = 0;
    }
	printf("enter moving zeros to end:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
