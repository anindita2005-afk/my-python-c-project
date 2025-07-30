#include <stdio.h>
void spiral(int a[10][10], int row, int col) {
    int top = 0, bottom = row, left = 0, right = col;
    while(top < bottom && left < right) {
        for(int i = left; i < right; i++) printf("%d ", a[top][i]);
        top++;
        for(int i = top; i < bottom; i++) printf("%d ", a[i][right-1]);
        right--;
        if(top < bottom) {
            for(int i = right-1; i >= left; i--) printf("%d ", a[bottom-1][i#include <stdio.h>

int main() {
    int mat[100][100], r, c, count = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) count++;
        }
    printf("%d", count);
    return 0;
}
            bottom--;
        }
        if(left < right) {
            for(int i = bottom-1; i >= top; i--) printf("%d ", a[i][left]);
            left++;
        }
    }
}
int main() {
    int a[10][10], row = 3, col = 3;
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &a[i][j]);
    spiral(a, row, col);
    return 0;
}




#include <stdio.h>

void rotate90(int mat[100][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }

    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][k];
            mat[i][k] = temp;
        }
}

int main() {
    int n, mat[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    rotate90(mat, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}





#include <stdio.h>

int main() {
    int n, mat[100][100], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
        if (i != n - i - 1) sum += mat[i][n - i - 1];
    }
    printf("%d", sum);
    return 0;
}








#include <stdio.h>

int main() {
    int r, c, mat[100][100];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}







#include <stdio.h>

int main() {
    int r, c, mat[100][100], count = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) count++;
        }

    if (count > (r * c) / 2)
        printf("Sparse matrix");
    else
        printf("Not a sparse matrix");

    return 0;
}





#include <stdio.h>

int main() {
    int a[100], b[100], res[100], n;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n; i++) res[i] = a[i] + b[i];
    for (int i = 0; i < n; i++) printf("%d ", res[i]);
    return 0;
}





#include <stdio.h>

int main() {
    int a[100], b[100], res[200] = {0}, n1, n2;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            res[i + j] += a[i] * b[j];
    for (int i = 0; i < n1 + n2 - 1; i++) printf("%d ", res[i]);
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    
    for (i = n - 1; i >= 0; i--) printf("%d ", arr[i]);

    free(arr);
    return 0;
}



#include <stdio.h>

int main() {
    int n, mat[100][100], flag = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                flag = 0;
        }

    if (flag)
        printf("Identity matrix");
    else
        printf("Not an identity matrix");

    return 0;
}




#include <stdio.h>

int main() {
    int mat[100][100], r, c, count = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) count++;
        }
    printf("%d", count);
    return 0;
}




