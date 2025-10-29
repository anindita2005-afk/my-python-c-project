// interleave_queue.c -- interleave first half and second half of queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int q[MAX], front=0, rear=0;
void enqueue(int x){ q[rear++]=x; }
int dequeue(){ return q[front++]; }
void interleave(){
    int n = rear - front; if(n%2!=0) return;
    int half = n/2;
    int temp[MAX]; int t=0;
    for(int i=0;i<half;i++) temp[t++]=dequeue();
    for(int i=0;i<half;i++) enqueue(dequeue());
    for(int i=0;i<half;i++){ enqueue(temp[i]); enqueue(dequeue()); }
}
int main(){
    enqueue(1); enqueue(2); enqueue(3); enqueue(4); interleave();
    while(front<rear) printf("%d ", dequeue()); printf("\n"); return 0;
}
