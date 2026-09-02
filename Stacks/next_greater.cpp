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
    int ans[n];
    ans[n-1] = -1;
    st.push(arr[n-1]);

    // pop  ans  push
    for(int i=n-2;i>=0;i--){
        while(st.top()<=arr[i] && st.size()>0) st.pop();
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}