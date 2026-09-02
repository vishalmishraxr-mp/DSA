#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cout<<("enter the size of the vector")<<endl;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    // sort(v.begin(), v.end());  // inbuilt sorting algorithms time complexity O(nlogn)
    // for(int i=0;i<5;i++){
    //    cout<<v[i]<<endl;
    // }
// bubble sort algorithms
   //  for(int i=0;i<n-1;i++){
   //    for(int j=0;j<n-1-i;j++){
   //     if(v[j+1]<v[j]){
   //       swap(v[j+1],v[j]);
   //       }
   //    }
   // }
    // bubble sort algorithms optimize case
    for(int i=0;i<n-1;i++){
    bool flag = true;
      for(int j=0;j<n-1-i;j++){
       if(v[j+1]<v[j]){
         swap(v[j+1],v[j]);
         flag = false;
         }
      }
      if(flag == true){    // if swaping didn't happend means already sort
         break;
      }
    }
    for(int i=0;i<n;i++){
       cout<<v[i]<<endl;
    }
return 0;
}

// stable and unstable sort:-
// stable:- 8 3 2 4 4` after sorting 2 3 4 4` 8  strictly greater then pr sorting krni hai
// unstable me aisa nhi hota 4` 4 se pahle aa jata hai 
// bubble sort stable sort hai 

// total number of swap needed to sort a array:- if size n then number of swap operation 
// = n(n-1)/2 