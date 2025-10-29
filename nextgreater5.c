
#include <stdio.h>
#define MAX 100
int main(){
    int n,a[MAX];printf("Enter n: ");scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int next=-1;
        for(int j=i+1;j<n;j++){if(a[j]>a[i]){next=a[j];break;}}
        printf("%d -> %d\n",a[i],next);
    }
    return 0;
}
