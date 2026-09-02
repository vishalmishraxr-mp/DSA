#include<iostream>
using namespace std;

int main(){ 
    stack<int> st;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nse[n];
    nse[n-1] = -1;
    st.push(n-1); 

    // pop  nse  push
    for(int i=n-2;i>=0;i--){
        while( st.size()>0 && arr[st.top()]>arr[i] ) st.pop();
        if(st.size()==0) nse[i] = -1;
        else nse[i] = st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
return 0;
}