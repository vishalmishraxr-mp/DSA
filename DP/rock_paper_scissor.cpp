#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

long double dp[105][105][105];

long double paper_prob(int r, int s, int p){
    if(p==0 || r==0) return 0.0;
    if(s==0) return 1.0;
    if(dp[r][s][p]> -0.9) return dp[r][s][p];

    long double total = r*p + p*s + s*r;
    long double result = 0.0;
    result += paper_prob(r,s-1,p)*(p*s)/total;
    result += paper_prob(r-1,s,p)*(p*r)/total;
    result += paper_prob(r,s,p-1)*(r*s)/total;
    return dp[r][s][p] = result;
}
long double rock_prob(int r, int s, int p){
    if(r==0 || s==0) return 0.0;
    if(p==0) return 1.0;
    if(dp[r][s][p]> -0.9) return dp[r][s][p];

    long double total = r*p + p*s + s*r;
    long double result = 0.0;
    result += rock_prob(r,s-1,p)*(p*s)/total;
    result += rock_prob(r-1,s,p)*(p*r)/total;
    result += rock_prob(r,s,p-1)*(r*s)/total;
    return dp[r][s][p] = result;

}
long double scissor_prob(int r, int s, int p){
    if(p==0 || s==0) return 0.0;
    if(r==0) return 1.0;
    if(dp[r][s][p]> -0.9) return dp[r][s][p];

    long double total = r*p + p*s + s*r;
    long double result = 0.0;
    result += scissor_prob(r,s-1,p)*(p*s)/total;
    result += scissor_prob(r-1,s,p)*(p*r)/total;
    result += scissor_prob(r,s,p-1)*(r*s)/total;
    return dp[r][s][p] = result;

}
int main(){ 
    int r,s,p;
    cin>>r>>s>>p;
    fill(&dp[0][0][0], &dp[0][0][0] + 105 * 105 * 105, -1.0L);
    long double paper_probability = paper_prob(r,s,p);
    fill(&dp[0][0][0], &dp[0][0][0] + 105 * 105 * 105, -1.0L);
    long double rock_probability = rock_prob(r,s,p);
    fill(&dp[0][0][0], &dp[0][0][0] + 105 * 105 * 105, -1.0L);
    long double scissor_probability = scissor_prob(r,s,p);

    cout << fixed << setprecision(12);
    cout<<paper_probability<<" "<<rock_probability<<" "<<scissor_probability<<endl;
    cout<<paper_probability + rock_probability + scissor_probability;
    
return 0;
}