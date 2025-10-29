// circular_queue.c -- simple circular queue using array
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int q[MAX], front=-1, rear=-1;
int isFull(){ return (front== (rear+1)%MAX); }
int isEmpty(){ return front==-1; }
void enqueue(int x){
    if(isFull()){ printf("Overflow\n"); return; }
    if(isEmpty()) front=0;
    rear = (rear+1)%MAX; q[rear]=x;
}
int dequeue(){
    if(isEmpty()){ printf("Underflow\n"); return -1; }
    int val = q[front];
    if(front==rear){ front = rear = -1; }
    else front = (front+1)%MAX;
    return val;
}
int main(){
    enqueue(10); enqueue(20); enqueue(30); enqueue(40); enqueue(50);
    enqueue(60); // should show overflow
    printf("%d dequeued\n", dequeue());
    enqueue(60);
    while(!isEmpty()) printf("%d ", dequeue());
    printf("\n"); return 0;
}
