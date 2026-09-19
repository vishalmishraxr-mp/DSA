#include<iostream>
#include<vector>
#include<queue>
using namespace std;

    int rows;
    int cols;
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
    void BFS(queue<pair<int,int>> & q,vector<vector<bool>> & vis, vector<vector<int>>& mat){
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int i = curr.first;
            int j = curr.second;

            for(int d=0;d<4;d++){
                int newR = i+dir[d][0];
                int newC = j+dir[d][1];
                if(newR < 0 || newC < 0 ||newR >= rows || newC >= cols) continue;
                if(vis[newR][newC] || mat[newR][newC] == -1) continue;
                if(vis[newR][newC]) continue;
                mat[newR][newC] = mat[i][j] + 1;
                vis[newR][newC] = true;
                q.push({newR, newC});
            }
    }
}
    void islandsAndTreasure(vector<vector<int>>& mat) {
        rows = mat.size();
        cols = mat[0].size();
        queue<pair<int,int> > q;
        vector<vector<bool>> vis(rows,vector<bool>(cols, false));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    vis[i][j] = true;
                }
            }
        }
        BFS(q,vis,mat);
};
int main(){ 
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    islandsAndTreasure(mat);
    cout<<"output\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
return 0;
}