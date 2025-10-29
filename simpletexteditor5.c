
#include <stdio.h>
#include <string.h>
int main(){
    char text[100]="";char cmd[10],arg[100];
    while(1){
        printf("Enter command (append/erase/print/exit): ");
        scanf("%s",cmd);
        if(strcmp(cmd,"append")==0){scanf("%s",arg);strcat(text,arg);}
        else if(strcmp(cmd,"erase")==0){int k;scanf("%d",&k);int len=strlen(text);if(k<=len)text[len-k]='\0';}
        else if(strcmp(cmd,"print")==0)printf("%s\n",text);
        else if(strcmp(cmd,"exit")==0)break;
    }
    return 0;
}
