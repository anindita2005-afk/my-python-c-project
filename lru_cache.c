// lru_cache.c -- simple LRU cache using arrays (small demo)
// Not full-featured, demonstrates access order updates
#include <stdio.h>
#include <string.h>
#define CAP 3
int keys[CAP]; int used[CAP]; int n=0;
int find(int k){ for(int i=0;i<n;i++) if(keys[i]==k) return i; return -1; }
void access_key(int k){
    int idx = find(k);
    if(idx!=-1){
        // mark as most recently used: move to end
        int val = keys[idx];
        for(int i=idx;i<n-1;i++) keys[i]=keys[i+1];
        keys[n-1]=val;
    } else {
        if(n<CAP) keys[n++]=k;
        else{ // evict least recently used (keys[0])
            for(int i=0;i<n-1;i++) keys[i]=keys[i+1];
            keys[n-1]=k;
        }
    }
}
void print_cache(){ for(int i=0;i<n;i++) printf("%d ", keys[i]); printf("\n"); }
int main(){
    access_key(1); access_key(2); access_key(3); print_cache();
    access_key(2); print_cache();
    access_key(4); print_cache();
    return 0;
}
