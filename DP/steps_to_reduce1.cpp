#include<iostream>
#include<vector>
#define inf INT_MAX
#include<algorithm>

using namespace std;

// in the problem we have to reduce the number from n to 1 in min steps
int reduce(int n, vector<int>& dp){
    if(n==1) return  0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + min({reduce(n-1,dp),(n%2 == 0) ? reduce(n/2,dp) : inf,(n%3 == 0) ? reduce(n/3,dp) : inf});
}
int main(){ 
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    int ans = reduce(n,dp);
    cout<<ans<<endl;
return 0;
}