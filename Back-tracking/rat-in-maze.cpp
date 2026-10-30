#include<iostream>
using namespace std;

int ans;
bool canGo(vector<vector<int>> &grid, int n, int i, int j){
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==0;

}
void solve(vector<vector<int>> &grid, int n, int i, int j){
    if(i==n-1 && j==n-1) {
        ans+=1;
        return;
    } 
    grid[i][j] = 2; // 2 means visited 
    // left
    if(canGo(grid,n,i,j-1)){
        solve(grid,n,i,j-1);
    }
    // down
    if(canGo(grid,n,i+1,j)){
        solve(grid,n,i+1,j);
    }
    // right
    if(canGo(grid,n,i,j+1)){
        solve(grid,n,i,j+1);
    }
    // up
    if(canGo(grid,n,i-1,j)){
        solve(grid,n,i-1,j);
    }
    grid[i][j] = 0;
}
int ratInMaze(vector<vector<int>> &grid, int n){
    ans = 0;
   solve(grid,n,0,0);
   return ans;
}
int main(){ 
    vector<vector<int>> grid = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<ratInMaze(grid,7)<<"\n";

return 0;
}