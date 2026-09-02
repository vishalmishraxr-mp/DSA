#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){ 
    int m,n;
    cin>>m>>n;
    vector<int> X(m-1), Y(n-1);
    for(int i=0;i<m-1;i++){
        cin>>X[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>Y[i];
    }
    int hz=1,vt=1;
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    reverse(X.begin(),X.end());
    reverse(Y.begin(),Y.end());
    long long totalcost = 0;
    int i = 0;
    int j = 0;
    while(i<X.size() && j<Y.size()){
        if(X[i]>=Y[j]){
            totalcost += X[i]*vt;
            i++;
            hz++;
        }
        else{
            totalcost += Y[j]*hz;
            j++;
            vt++;
        }
    }
    while(i<X.size()){
        totalcost += X[i]*vt;
        i++;
        hz++;
    }
    while(j<Y.size()){
        totalcost += Y[j]*hz;
        j++;
        vt++;
    }
    cout<<totalcost<<endl;
return 0;
}