// queue_linkedlist.c -- queue using linked list
#include <stdio.h>
#include <stdlib.h>
struct Node{ int data; struct Node* next; };
struct Node *front=NULL, *rear=NULL;
void enqueue(int x){
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x; n->next = NULL;
    if(rear==NULL) front = rear = n;
    else { rear->next = n; rear = n; }
}
int dequeue(){
    if(front==NULL){ printf("Underflow\n"); return -1; }
    struct Node* t = front; int d = t->data; front = front->next;
    if(front==NULL) rear = NULL; free(t); return d;
}
int main(){
    enqueue(1); enqueue(2); enqueue(3);
    printf("%d dequeued\n", dequeue());
    enqueue(4);
    while(front){ printf("%d ", dequeue()); }
    printf("\n"); return 0;
}
