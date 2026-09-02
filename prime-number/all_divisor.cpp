#include<iostream>
#include<cmath>
using namespace std;


// sare divisor ko print krne ke liye agar hum n tak loop chalayenge 
//then time complexity jayada ayegu this is much better than n
int main(){ 
    int n;
    cin>>n;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0) cout<<i<<" ";
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0) cout<<n/i<<" ";
        }
return 0;
}