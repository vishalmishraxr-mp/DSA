#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int cost = 0;
    while(pq.size()>1){
        int first = pq.top();  // pahle ek pop krlo 
        pq.pop();
        int second = pq.top();  // dusra pop
        pq.pop();
        cost += (first + second); // cost me dono jod do 
        pq.push(first + second);  // first + second ko pq me push kr do
    }
    cout<<cost<<endl;
return 0;
}