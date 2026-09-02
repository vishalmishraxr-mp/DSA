#include<iostream>
using namespace std;

int main(){ 
    int n;
     cin>>n;
     bool flag = false;
     for(int i=2;i<n;i++){
        if(n%i==0){
        flag = false;
        break;
        }
        else {
            flag =  true;
            break;
     }
    }
     if(flag==true) cout<<"prime"<<endl;
     else cout<<"not prime"<<endl;
return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
	 int t;
	 if (!(cin >> t)) return 0;
	 while(t--) {
	     long long n,m;
	      cin>>n>>m;
	      long long sum = 0;
	      vector<long long> arr(n);
	      for(int i=0;i<n;i++){
	          cin>>arr[i];
	         sum += (max((arr[i]-1),(m-arr[i])));
	      }
	      cout<<sum<<"\n";
	 }
  return 0;
}
