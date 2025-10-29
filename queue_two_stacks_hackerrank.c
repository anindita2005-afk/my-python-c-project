// queue_two_stacks_hackerrank.c -- simple interactive version matching HackerRank problem
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int s1[MAX], s2[MAX], top1=-1, top2=-1;
void push1(int x){ s1[++top1]=x; }
int pop1(){ return s1[top1--]; }
void push2(int x){ s2[++top2]=x; }
int pop2(){ return s2[top2--]; }
void enqueue(int x){ push1(x); }
int dequeue(){
    if(top2==-1){ while(top1!=-1) push2(pop1()); }
    if(top2==-1) return -1;
    return pop2();
}
int peek(){
    if(top2==-1){ while(top1!=-1) push2(pop1()); }
    if(top2==-1) return -1;
    return s2[top2];
}
int main(){
    // demo sequence of operations
    enqueue(1); enqueue(2); printf("%d\n", peek()); dequeue(); printf("%d\n", peek()); enqueue(3); printf("%d\n", dequeue()); return 0;
}
