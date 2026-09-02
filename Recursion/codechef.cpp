#include<iostream>
using namespace std;

int main(){ 
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m = 0;
	    // if(n==1) cout<<1<<endl;
	    // else{
	    for(int i=2;i<=n;i++){
	    if(i%2==0 && i%5!=0){
	         m  = max(m,i);
	       }
	    if(i%2!=0 && i%5==0){
	         m  = max(m,i);
	       }
	    }
        cout<<m<<endl;
	    cout<<abs(n-m)<<endl;
	    // }
	}
return 0;
}