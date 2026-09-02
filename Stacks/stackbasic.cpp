#include<iostream>
#include<stack>
using namespace std;

// recursive display function
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}

int main(){
    stack<int> st;
    st.push(6);
    st.push(18);
    st.push(9);
    st.push(12);   // push size 4
    // cout<<st.size()<<endl;
    // st.pop();  // pop ho gya ek 
    // cout<<st.size()<<endl;  // now size is 3 
    // cout<<st.top()<<endl;

    // traversal function   // 9 18 16
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // is traversal ka ye draw back hai ki ye sare pop ho ja rhe hai
    // hum inhe dobara access nhi ke sakte hai 

    // now we use extra space so that we get stack back after traversal complete
    stack<int> temp;
     while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
// agar hame stack ko normal order me print karna hai then we have to apply print
    // operation when we push the element again in st stack from temp stack
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"\n"<<st.size()<<"\n";

    display(st);


return 0;
}