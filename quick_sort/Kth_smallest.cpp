#include<iostream>
using namespace std;
int partition(int arr[], int s_idx, int e_idx){
     int pivot_element = arr[(s_idx+e_idx)/2];
     int count = 0;
     for(int i=s_idx;i<=e_idx;i++){
        if(i==(s_idx+e_idx)/2) continue;
        if(arr[i]<=pivot_element){
            count++;
        }
    }
        int pivot_idx = count+s_idx; 
        swap(arr[(s_idx+e_idx)/2],arr[pivot_idx]);
        int i = s_idx;
        int j = e_idx;
        while(i<pivot_idx && j>pivot_idx){
           if(arr[i]<=pivot_element) i++;
           if(arr[j]>pivot_element) j--;
           if(arr[i]>pivot_element && arr[j]<=pivot_element){
            swap(arr[i],arr[j]);
            i++;
            j--;
           }
        }
        return pivot_idx;
}
int  Kthsmallest(int arr[], int s_idx, int e_idx, int k){
    int pivot_idx = partition(arr,s_idx,e_idx);
      if(pivot_idx+1==k) return arr[pivot_idx];
      else if(pivot_idx+1<k) return Kthsmallest(arr,pivot_idx+1,e_idx,k);
     else return Kthsmallest(arr,s_idx,pivot_idx-1,k);
}

int main(){ 
    int arr[] = {5,1,8,2,7,6,3,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int k = 4;
    cout<<"\n"<<Kthsmallest(arr,0,n-1,k);
return 0;
}