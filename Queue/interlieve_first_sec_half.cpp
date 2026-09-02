#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void re_order(queue<int>& q){
    stack<int> st;
    int n = q.size();

    // first half ko q se stack me dalo
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // ab fir se q me dalo
    while(st.size()>0){
        int x = st.top();
        q.push(x);
        st.pop();
    }

    // ab fir se jo fist half bana hai use stack me dalo
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // ab pahle stack se q me push then q se hi pop push q me hi alternate st que
    while(st.size()>0){
        int x = st.top();
        q.push(x);
        st.pop();
        int y = q.front();
        q.pop();
        q.push(y);
    }

    // reverse of a queue
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

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
int main(){ 
    //  1  2  3  4  5  6
    //  1  4  2  5  3  6
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    re_order(q);
    display(q);
return 0;
}