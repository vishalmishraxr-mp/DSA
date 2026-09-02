#include<iostream>
#include<stack>
#include<queue>
using namespace std;



// push efficient approach pop -> O(n) peek O(n) and push O(1)

stack<int> st;
stack<int> st2;
void push(int val){
    st.push(val);
}
int pop(){
    if(st.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    while(st.size()>0){
            st2.push(st.top());
            st.pop();
        }
        int x = st2.top();
        st2.pop();
        while(st2.size()>0){
            st.push(st2.top());
            st2.pop();
        }
        return x;
}
int peek(){
    if(st.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    while(st.size()>0){
            st2.push(st.top());
            st.pop();
        }
        int x = st2.top();
        while(st2.size()>0){
            st.push(st2.top());
            st2.pop();
        }
        return x;
}
void display(){
    while(st.size()>0){
            st2.push(st.top());
            st.pop();
        }
        while(st2.size()>0){
            st.push(st2.top());
            cout<<st2.top()<<" ";
            st2.pop();
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