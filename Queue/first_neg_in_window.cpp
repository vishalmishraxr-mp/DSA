#include<iostream>
#include<queue>
using namespace std;


// int this question we have to find first negative element in window of size k
int main(){ 
    int arr[10] = {0,-1,-2,3,4,-5,6,7,8,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    queue<int> q;
    for(int i=0;i<n;i++){
          if(arr[i]<0) q.push(i);
    }
    int i = 0;
    vector<int> ans;
        for(i=0;i<n-k+1;i++){
            while(!q.empty() && q.front()<i) q.pop();
            if(!q.empty() && q.front() <= i+k-1)
            ans.push_back(arr[q.front()]);
            else ans.push_back(0);
        }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}