#include <stdio.h>
int main() {
    int arr[100], n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &x);
    arr[n] = x;
    n++;
    printf("Array after insertion: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}




#include <stdio.h>
int main() {
    int n, arr[100], max;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max) max = arr[i];
    printf("Largest element: %d", max);
    return 0;
}






#include <stdio.h>
int main() {
    int n, arr[100], max1 = -1e9, max2 = -1e9;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("Second largest: %d", max2);
    return 0;
}





#include <stdio.h>
int main() {
    int n, arr[100], j = 0;
    scanf("%d", &n);
    int result[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) if(arr[i] != 0) result[j++] = arr[i];
    while(j < n) result[j++] = 0;
    for(int i = 0; i < n; i++) printf("%d ", result[i]);
    return 0;
}





#include <stdio.h>
int main() {
    int n, arr[100], last;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    last = arr[n-1];
    for(int i = n-1; i > 0; i--) arr[i] = arr[i-1];
    arr[0] = last;
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}





#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int isSorted = 1;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            isSorted = 0;
            break;
        }
    }
    if(isSorted)
        printf("Array is sorted\n");
    else
        printf("Array is not sorted\n");
    return 0;
}






#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}





#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}







#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n];
    for(int i = 0; i < n; i++) visited[i] = 0;

    for(int i = 0; i < n; i++) {
        if(visited[i]) continue;
        int count = 1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}






#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
