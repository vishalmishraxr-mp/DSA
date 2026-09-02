#include<iostream>
using namespace std;

int main(){ 
     int n = 6;
    int arr[] = {1,6,35,23,8,11};
    int sumarr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        sumarr[i] = arr[i] + sum;
        sum = sumarr[i];
    }
    for(int i=0;i<n;i++){
        cout<<sumarr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        if(sumarr[i]==sumarr[n-1]/2){
            cout<<"partition from index 0 to index "<<i<<" and "<<i+1<<" to "<<(n-1)<<endl;
            break;
        }
    }
return 0;
}