// queue_array.c -- simple queue using array
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int q[MAX], front=-1, rear=-1;
int isEmpty(){ return front==-1 || front>rear; }
void enqueue(int x){ if(rear==MAX-1){ printf("Overflow\n"); return; } if(front==-1) front=0; q[++rear]=x; }
int dequeue(){ if(isEmpty()){ printf("Underflow\n"); return -1; } return q[front++]; }
int main(){
    enqueue(10); enqueue(20); enqueue(30);
    printf("%d dequeued\n", dequeue());
    printf("%d dequeued\n", dequeue());
    enqueue(40);
    while(!isEmpty()) printf("%d ", dequeue());
    printf("\n");
    return 0;
}
