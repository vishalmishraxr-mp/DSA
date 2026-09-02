// insertion sort 
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
    for (int i=1;i<n;i++) {
        int j = i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else{
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
return 0;
}

// insertion sort also a stable sort algorithms