#include<iostream>
using namespace std;

int main(){ 
    int arr[] = {1,3,1,-5,4,2,8,9,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int ans[n-k+1];
    int i = 1;
    int p = -1;
    int j = k;
    for(int x=0;x<k;x++){
        if(arr[x]<0) {
            p = x;
            break;
    }
}
    while(j<n){
        if(p==-1) ans[0] = 0;
    else{
        ans[0] = arr[p];
    }
        if(p>=i) ans[i] = arr[p];
        else{
            p = -1;
           for(int x=i;x<=j;x++){
            if(arr[x]<0) {
                p = x;
                break;
           }
        }
           if(p!=-1)
           ans[i] = arr[p];
           else ans[i] = 0;
    }
        i++;
        j++;
}
    for(int i=0;i<(n-k+1);i++){
        cout<<ans[i]<<" ";
    }
return 0;
}