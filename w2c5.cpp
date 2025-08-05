#include <stdio.h>

int main() {
    int r, c;

    printf("number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
	int CN = 0;
    int total = r * c;

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

  
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 0) {
                CN++;
            }
        }
    }

 
    if (CN > total / 2) {
        printf("The matrix is sparse");
    } else {
        printf("The matrix is not sparse");
    }

    return 0;
}

