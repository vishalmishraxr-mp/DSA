#include<iostream>
#include<queue>
using namespace std;

int main(){ 
    int arr[] = {12,20,-4,-6,18,2,105};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;
//     int m = sizeof(arr)/4;
// for(int i=0;i<m;i++){
//         pq.push(arr[i]);
//         if(pq.size()>k) pq.pop();
//     }
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    int j = k+1;
    while(j<n){
        if(arr[j]<pq.top()){
        pq.pop();  // pop k+1 th lement because it can never
        // be kth smallest because k element smaller thn that is already in pq;
        pq.push(arr[j]); 
        } // push next 
        j++;
    }
    pq.pop();  // pop last k+1 th element 
    cout<<pq.top()<<" ";
return 0;
}