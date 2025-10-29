// rotten_oranges.c -- BFS style approach simplified (timesteps)
#include <stdio.h>
#define MAX 100
int main(){
    int grid[3][3] = {{2,1,1},{1,1,0},{0,1,1}};
    // hard-coded example; expected output: 4 (minutes)
    int rows=3, cols=3;
    int fresh=0;
    int minutes=0;
    int changed=1;
    while(changed){
        changed=0;
        for(int i=0;i<rows;i++) for(int j=0;j<cols;j++){
            if(grid[i][j]==1){
                if((i>0 && grid[i-1][j]==2)||(j>0 && grid[i][j-1]==2)||(i<rows-1 && grid[i+1][j]==2)||(j<cols-1 && grid[i][j+1]==2)){
                    grid[i][j]=3; changed=1;
                }
            }
        }
        for(int i=0;i<rows;i++) for(int j=0;j<cols;j++) if(grid[i][j]==3) grid[i][j]=2;
        if(changed) minutes++;
    }
    // check remaining fresh
    for(int i=0;i<rows;i++) for(int j=0;j<cols;j++) if(grid[i][j]==1) fresh++;
    if(fresh>0) printf("-1\n"); else printf("Minutes=%d\n", minutes);
    return 0;
}
