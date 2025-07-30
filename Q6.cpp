#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n;
    printf("enter string: ");
    scanf("%s", s);

    n = strlen(s);
    
    printf("reversed string: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}

