// #include<iostream>
// using namespace std;

// normal approach not valid for large number of m and n
// int uniquePaths(int m, int n) {
//          int N = m + n - 2;
//          int R = min(m - 1, n - 1);
//          double ans = 1;
//          for (int i = 1; i <= R; i++) {
//              ans = ans * (N - R + i) / i;
//          }
//          return ans;
// }
// int main(){ 
//     int m,n;
//     cin>>m>>n;
//     int ans = uniquePaths(m,n);
//     cout<<ans<<endl;
//     return 0;
// return 0;
// }

// now dp approach
#include<iostream>
using namespace std;

int helper(int sr, int sc,int er, int ec, vector<vector<int>> & dp){
    if(sr==er && sc==ec) return 1; 
    if(sr>er || sc>ec) return 0; 
    if(dp[sr][sc]!=-1) return dp[sr][sc];
    return dp[sr][sc] = helper(sr+1,sc,er,ec,dp) + helper(sr,sc+1,er,ec,dp);
}
    int uniquePaths(int m, int n) {
            vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0,0,m-1,n-1,dp);
    }
int main(){ 
    int n,m;
    cin>>n>>m;
    int ans = uniquePaths(m,n);
    cout<<ans<<endl;
return 0;
}