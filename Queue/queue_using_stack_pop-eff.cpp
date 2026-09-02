#include<iostream>
#include<stack>
#include<queue>
using namespace std;


// pop efficient approach pop -> O(1) peek O(1) and push O(n)

stack<int> st;
stack<int> st2;
void push(int val){
    if(st.size()==0){
        st.push(val);
    }
    else{
        while(st.size()>0){
            st2.push(st.top());
            st.pop();
        }
        st.push(val);
        while(st2.size()>0){
            st.push(st2.top());
            st2.pop();
        }
    }
}
int pop(){
    if(st.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }
        int x = st.top();
        st.pop();
        return x;
}
int peek(){
    if(st.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    int x = st.top();
        return x;
}
void display(){
    while(st.size()>0){
        int x = st.top();
        cout<<x<<" ";
        st.pop();
        st2.push(x);
    }
    while(st2.size()>0){
        int x = st2.top();
        st2.pop();
        st.push(x);
    }
}
int main(){ 
    push(3);
    push(4);
    push(1);
    push(9);
    push(56);
    cout<<pop()<<endl;
    display();
return 0;
}