#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverse(queue<int> &q){

    stack<int> st;
    int n = q.size();

    // pop from queue and push into the stack
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    // pop from stack and push into the queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}
void display(queue<int> &q){
    int n = q.size();
    if(n==0){
        cout<<"q is empty"<<endl;
    }
    for(int i=1;i<=n;i++){
        int x = q.front();
        q.pop();
        q.push(x);
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main(){ 
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);   // 10  20  30  40
    display(q);
    reverse(q);   // 40  30  20  10
    display(q);
return 0;
}