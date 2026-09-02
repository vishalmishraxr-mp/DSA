#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int key;
    cout<<"enter the key for search in array: ";
    cin>>key;
    vector<int> arr(n);
    cout<<"enter the element of array: ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }   
    sort(arr.begin(),arr.end());
    int low = 0;
    int high = n-1;
    int mid  = low + (high - low)/2;
    while (low<=high){
    mid  = low + (high - low)/2;
      if(arr[mid]==key){
         cout<<"key is present at index "<<mid<<endl;
         break;
      }
      if(arr[mid]<key){
         low = mid+1;
      }
      if(arr[mid]>key){
         high = mid-1;
      }
    }
    if(low>high){
        cout<<-1;
    }
return 0;
}