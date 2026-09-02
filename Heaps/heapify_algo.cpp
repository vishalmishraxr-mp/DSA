#include<iostream>
using namespace std;

void print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void heapify(int i, int n, int arr[]){
        while(1){
            int l = 2*i, r = 2*i +1;
            if(l>=n) break;
            if(r>=n){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                break;
            }
            if(arr[l]<arr[r]) {
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                else break;
            }
            if(arr[l]>arr[r]) {
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i = r;
                }
                else break;
            }
        }
}
int main(){ 
     int arr[] = {-1,10,2,14,11,1,4};  // -1 is just for indexing start from 1 
     int n = sizeof(arr)/4;
     print(arr,n);
     for(int i=n/2; i>=1;i--){
        heapify(i,n,arr);
     }
     print(arr,n);
return 0;
}