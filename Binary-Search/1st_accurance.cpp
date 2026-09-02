// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // given an sorted array find first accurance of a number in array
// int main(){ 
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int key;
//     cout<<"enter the key for search in array: ";
//     cin>>key;
//     vector<int> arr(n);
//     cout<<"enter the element of array: ";
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int low = 0;
//     int high = n-1;
//     int mid  = low + (high - low)/2;
//     bool flag = false;
//     while (low<=high){
//     mid  = low + (high - low)/2;
//     if(arr[mid]==key){ 
//         if(arr[mid-1]!=key){
//         cout<<"first accurance at index: "<<mid<<endl;
//         flag = true;
//         }
//         else{
//          high = mid-1;
//         }
//       }
//       if(arr[mid]<key){
//          low = mid+1;
//       }
//       if(arr[mid]>key){
//          high = mid-1;
//       }
//     }
//     if(flag==false){
//         cout<<"element not present in the array"<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// given an sorted array find first accurance of a number in array
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
    int low = 0;
    int high = n-1;
    int mid  = low + (high - low)/2;
    bool flag = false;
    while (low<=high){
    mid  = low + (high - low)/2;
    if(arr[mid]==key){ 
        if(arr[mid-1]!=key || mid>0){
        cout<<"first accurance at index: "<<mid<<endl;
        flag = true;
        }
        else{
         high = mid-1;
        }
      }
      if(arr[mid]<key){
         low = mid+1;
      }
      if(arr[mid]>key){
         high = mid-1;
      }
      if(flag==true && arr[mid]==key){
         if(arr[mid+1]!=key && mid<n){
        cout<<"last accurance at index: "<<mid<<endl;
        }
        else{
         high = mid+1;
         low = mid+1;
        }
      }
    }
    if(flag==false){
        cout<<"element not present in the array"<<endl;
    }
    return 0;
}