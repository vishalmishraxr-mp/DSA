#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> &q){
    if(q.size()==0){
        cout<<"q is empty"<<endl;
    }
    for(int i=1;i<=q.size();i++){
        int x = q.front();
        q.pop();
        q.push(x);
        cout<<x<<" ";
    }
    cout<<"\n";
}
void reverse_k(queue<int> &q, int k){
    stack<int> st;
    for(int i=0;i<k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    for(int i=0;i<k;i++){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    int s = q.size();
    for(int i=0;i<s-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){ 
    stack<int> st;
    queue<int> q;
    q.push(6);
    q.push(2);
    q.push(5);
    q.push(9);
    q.push(1);
    display(q);
    reverse_k(q,2);
    display(q);

return 0;
}