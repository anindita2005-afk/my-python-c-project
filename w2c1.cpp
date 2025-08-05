#include<stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    
    printf("Enter  elements:");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }



    printf("Spiral matrix:\n");
    while(top <= bottom && left <= right) {
        
        for(int i = left; i <= right; i++) {
            printf("%d ", a[top][i]);
        }
        top++;

        
        for(int i = top; i <= bottom; i++) {
            printf("%d ", a[i][right]);
        }
        right--;

        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                printf("%d ", a[bottom][i]);
            }
            bottom--;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}

