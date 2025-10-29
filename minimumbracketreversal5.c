
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];printf("Enter braces: ");scanf("%s",s);
    int open=0,rev=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='{')open++;
        else{
            if(open==0){rev++;open++;}else open--;
        }
    }
    rev+=open/2;
    printf("Minimum reversals=%d\n",rev);return 0;
}
