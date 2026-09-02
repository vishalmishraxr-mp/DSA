#include<iostream>
#include<vector>
using namespace std;

void vector_sum(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    if(n==1) return;
    vector<int> store;
    for(int i=0;i<arr.size()-1;i++){
    store.push_back(arr[i]+arr[i+1]);
    }
    vector_sum(store);
  }
int main(){ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"reduced array step by step:---"<<endl;
    vector_sum(arr);
return 0;
}