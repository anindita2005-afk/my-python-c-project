
#include <stdio.h>
#define MAX 100
int main(){
    int n,price[MAX],span[MAX];printf("Enter n: ");scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&price[i]);
    for(int i=0;i<n;i++){span[i]=1;for(int j=i-1;j>=0&&price[j]<=price[i];j--)span[i]++;}
    for(int i=0;i<n;i++)printf("%d ",span[i]);printf("\n");return 0;
}
