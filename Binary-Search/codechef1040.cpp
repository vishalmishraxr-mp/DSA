#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){ 
    int t;
      cin>>t;
      while(t--){
          int n;
          cin>>n;
          cin.ignore();
          string s;
          getline(cin,s);
          int count = 0;
          int delcount = 0;
          int idx = 0;
        sort(s.begin(),s.end());
          for(int i=0;i<n;i=i+idx){
              for(int j=i;j<n;j++){
                if(s[i]==s[j]){
                    count++;
                } 
              }
              idx = count;
              if(count%2==0){
                  delcount += count;
              }
            count = 0;
          }
        cout<<s<<endl;
        if(delcount==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
return 0;
}