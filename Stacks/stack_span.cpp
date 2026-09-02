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
    st.push(0);

    // store the index of the preev greatest element 
    for(int i=1;i<n;i++){
         while(arr[st.top()]<=arr[i] && st.size()>0) st.pop();
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(i);
    }

    // ans is index of arr - ans[i]
    for(int i=0;i<n;i++){
        cout<<i-ans[i]<<" ";
    }
return 0;
}