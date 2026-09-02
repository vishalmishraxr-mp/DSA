#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int days;
    cin>>days;
    int max =INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){ 
        sum += arr[i];
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    int low = max;
    int high = sum-1;
    int mid = low+(high-low)/2;
    int weight = 0;
    while(low<=high){
        
    }
return 0;
}