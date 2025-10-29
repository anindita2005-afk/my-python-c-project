// first_non_repeating.c -- first non-repeating char in stream (simple)
#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(){
    char s[100]; printf("Enter stream: "); scanf("%s", s);
    int count[256]={0};
    for(int i=0;i<strlen(s);i++) count[(unsigned char)s[i]]++;
    for(int i=0;i<strlen(s);i++) if(count[(unsigned char)s[i]]==1){ printf("First non-repeating: %c\n", s[i]); return 0; }
    printf("No non-repeating\n"); return 0;
}
