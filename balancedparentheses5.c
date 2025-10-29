
#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];int top=-1;
void push(char c){stack[++top]=c;}
char pop(){return stack[top--];}
int main(){
    char exp[MAX];printf("Enter expression: ");scanf("%s",exp);
    top=-1;
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[') push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==-1){printf("Not Balanced\n");return 0;}
            char c=pop();
            if((exp[i]==')'&&c!='(')||(exp[i]=='}'&&c!='{')||(exp[i]==']'&&c!='[')){printf("Not Balanced\n");return 0;}
        }
    }
    if(top==-1)printf("Balanced\n");else printf("Not Balanced\n");
    return 0;
}
