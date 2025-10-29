
#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
struct Node*top=NULL;
void push(int x){
    struct Node*t=malloc(sizeof(struct Node));
    t->data=x;t->next=top;top=t;
}
int pop(){
    if(!top){printf("Underflow\n");return -1;}
    struct Node*t=top;int d=t->data;top=top->next;free(t);return d;
}
int main(){
    push(5);push(15);printf("Popped %d\n",pop());printf("Popped %d\n",pop());
    return 0;
}
