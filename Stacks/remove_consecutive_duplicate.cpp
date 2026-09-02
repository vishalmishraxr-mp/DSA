#include<iostream>
#include<stack>
using namespace std;

void display(stack<char>& st){
    if(st.size()==0) return;
    char x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
};
int main(){ 
   stack<char> st;
   string s = "aaaabbccffgaabb";
   for(int i=0;i<s.size();i++){
    if(st.size()==0) st.push(s[i]);
    else if(st.top()!=s[i]) st.push(s[i]);
   }

  display(st);
    
return 0;
}