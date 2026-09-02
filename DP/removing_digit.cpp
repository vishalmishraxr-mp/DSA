#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> get_digit(int n){
    vector<int> digit;
    while(n!=0){
        int d = n%10;
        if(d!=0) digit.push_back(d);
        n = n/10; 
    }
    return digit;
}
vector<int> dp(1000005,-1);
int fun(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> dgt = get_digit(n);
    int mn = INT_MAX;
    for(int i=0;i<(int)dgt.size();i++){
        mn = min(mn,fun(n-dgt[i]));
    }
    return dp[n] = 1 + mn;
}
int main(){ 
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
return 0;
}