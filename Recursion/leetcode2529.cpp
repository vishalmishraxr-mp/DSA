#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = low+(high-low)/2;
    int pidx = -1;
    int nidx = -1;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]<0){
            if(arr[mid+1]>=0){
            nidx = mid;
            break;
        }
        else low = mid+1;
    }
        else if(arr[mid]>=0){
            high = mid-1;
        }
    }
    low = 0;
    high = n-1;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]>0){
            if(arr[mid-1]<=0){
            pidx = mid;
            break;
        }
        else high = mid-1;;
    }
        else if(arr[mid]<=0){
            low=mid+1;
        }
    }
    cout<<"number of negative numbers : "<<nidx+1<<endl;
    cout<<"number of positive numbers : "<<n-pidx<<endl;
return 0;
}