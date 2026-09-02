#include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<<("enter the size of the vector")<<endl;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
// bubble sort algorithms
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-1-i;j++){
       if(v[j]==0){
         swap(v[j+1],v[j]);
         }
      }
   }
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
return 0;
}