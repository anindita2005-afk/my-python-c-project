
#include <stdio.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];int top=-1;
void push(char c){stack[++top]=c;}
char pop(){return stack[top--];}
int prec(char c){if(c=='+'||c=='-')return 1;if(c=='*'||c=='/')return 2;return 0;}
int main(){
    char infix[MAX],postfix[MAX];printf("Enter infix: ");scanf("%s",infix);
    int k=0;
    for(int i=0;infix[i];i++){
        char c=infix[i];
        if(isalnum(c))postfix[k++]=c;
        else if(c=='(')push(c);
        else if(c==')'){while(top!=-1&&stack[top]!='(')postfix[k++]=pop();top--;}
        else{while(top!=-1&&prec(stack[top])>=prec(c))postfix[k++]=pop();push(c);}
    }
    while(top!=-1)postfix[k++]=pop();
    postfix[k]='\0';printf("Postfix: %s\n",postfix);return 0;
}
