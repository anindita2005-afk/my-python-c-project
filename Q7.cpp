#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, f = 1;
    printf("enter string: ");
    scanf("%s", s);

    n = strlen(s);
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            f = 0;
        }
    }

    if (f)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

