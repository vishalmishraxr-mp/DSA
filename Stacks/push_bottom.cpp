#include<iostream>
using namespace std;

  void push_bottom(int x, stack<int> &st){
        stack<int> temp;
     while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);   // bottom me insert ho jayega 
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
       }
    }

int main(){ 
    stack<int> st;
    st.push(6);
    st.push(18);
    st.push(9);
    st.push(12); 
    
    push_bottom(82,st);
    stack<int> temp;
    // display
     while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
return 0;
}