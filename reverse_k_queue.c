// reverse_k_queue.c -- reverse first k elements of a queue using a stack (array)
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int q[MAX], front=0, rear=0;
void enqueue(int x){ q[rear++]=x; }
int dequeue(){ return q[front++]; }
void reverseFirstK(int k){
    int stack[MAX], top=-1; int size = rear - front;
    if(k>size) return;
    for(int i=0;i<k;i++) stack[++top]=dequeue();
    int temp[MAX]; int tlen=0;
    while(top!=-1) temp[tlen++]=stack[top--];
    while(front<rear) temp[tlen++]=dequeue();
    // rebuild queue
    front=0; rear=0;
    for(int i=0;i<tlen;i++) enqueue(temp[i]);
}
int main(){
    enqueue(1); enqueue(2); enqueue(3); enqueue(4); enqueue(5);
    reverseFirstK(3);
    while(front<rear) printf("%d ", dequeue());
    printf("\n"); return 0;
}
