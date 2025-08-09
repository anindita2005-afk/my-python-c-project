#include <stdio.h>

void main(){
    int n, i, f=-1, s=-1;
    int a[100];
    printf("enter size of array:");
    scanf("%d", &n);
    
	printf("enter elements of array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
        for (i = 0; i < n; i++){
        if (a[i] > f){
            s = f;
            f = a[i];
        } else if (a[i] > s && a[i] != f){
            s = a[i];
        }
    }
	
	printf("second largest element:");
    printf("%d", s);
}

