#include<iostream>
using namespace std;

void merge(vector<int>& arr,vector<int> & brr,vector<int> & res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]) res[k++] = arr[i++];
        else res[k++] = brr[j++];
    }
    if(i==arr.size()){
        while(j<brr.size()) res[k++] = brr[j++];
    }
    if(j==brr.size()){
        while(i<arr.size()) res[k++] = arr[i++];
    }
}
int main(){ 
    int n1 = 5;
    vector<int> arr(n1);
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    int n2 = 5;
    vector<int> brr(n2);
    for(int i=0;i<n2;i++){
        cin>>brr[i];
    }
    vector<int> res(n1+n2);
    merge(arr,brr,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
return 0;
}