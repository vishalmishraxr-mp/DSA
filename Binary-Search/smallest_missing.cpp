#include<iostream>
#include<vector>
using namespace std;

int main(){ 
 // smallest missing positive integer arrsy have +ve distinct values
    //  int arr[] = {0,1,2,3,4,6,7,8};
    // int n = 8;
    //  for(int i=0;i<n;i++){
    //     if(arr[i] != i){
    //         cout<<i<<endl;
    //         break;
    //     }
    //  }

    // second approach O(logn) : - binary search
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans = -1;
   int low = 0;
   int high = n-1;
   int mid = low + (high - low)/2;
   while(low<=high){
    mid = low + (high - low)/2;
    if(arr[mid] == mid){
        low = mid+1;
    }
    else{ 
       ans = mid;
       high = mid-1;
    }
   }
   cout<<ans<<endl;
    return 0;
}