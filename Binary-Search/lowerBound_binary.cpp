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
    bool flag = false;
    while (low<=high){
    mid  = low + (high - low)/2;
    if(arr[mid]==key){   // if element exist then lower bound arr[mid-1]
         cout<<arr[mid-1]<<endl;
         flag = true;
         break;
      }
      if(arr[mid]<key){
         low = mid+1;
      }
      if(arr[mid]>key){
         high = mid-1;
      }
    }
    if(false){
    cout<<"the lower bound is: "<<arr[high]<<endl;
    } 
 // if element not exist then when last condition hit and high become
//  less then low then arr[high] is lower bound value less than key
return 0;
}

// for upper bound of x element and if x present in array then arr[mid+1] 
// and if not present then arr[low] bss baaki same code