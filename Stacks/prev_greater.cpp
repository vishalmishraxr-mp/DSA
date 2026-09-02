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
    vector<int> ans(n);
    ans[0] = -1;
    st.push(arr[0]);

    // pop  ans  push
    for(int i=1;i<n;i++){
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