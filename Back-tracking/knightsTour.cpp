#include<iostream>
using namespace std;

bool isSafe(vector<vector<int>> &grid, int i, int j, int n){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}
vector<int> dx = {-2,-1,-2,-1,2,1,2,1};
vector<int> dy = {1,2,-1,-2,1,2,-1,-2};
void solve(vector<vector<int>> &grid, int i, int j, int n, int count){
    if(count==n*n-1){
        grid[i][j] = count;
        grid[i][j] = -1;
        return;
    }
    for(int k=0;k<dx.size();k++){
            if(isSafe(grid,i+dx[k],j+dy[k],n)){
            grid[i][j] = count;
            solve(grid,i+dx[k],j+dy[k],n,count+1);
            grid[i][j] = -1;
        }
    }
}
void knight(int n, int i, int j){
    vector<vector<int> > grid(n, vector<int> (n,-1));
    solve(grid,i,j,n,0);
}
int main(){ 
    knight(5,0,0);
return 0;
}