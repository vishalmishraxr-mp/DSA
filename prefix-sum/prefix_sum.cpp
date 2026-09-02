#include<iostream>
using namespace std;

int main(){ 
    int n = 6;
    int arr[] = {1,6,35,23,8,9};
    int brr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        brr[i] = arr[i] + sum;
        sum = brr[i];
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
return 0;
}