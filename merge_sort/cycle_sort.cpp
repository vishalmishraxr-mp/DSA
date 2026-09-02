#include<iostream>
using namespace std;

int main(){ 
    int arr[] = {6,1,4,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<n){
        int idx = arr[i]-1;
        if(idx ==i) i++;
        else{
            swap(arr[i],arr[idx]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}