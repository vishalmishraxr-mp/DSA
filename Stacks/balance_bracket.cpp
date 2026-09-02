#include<iostream>
#include<stack>

using namespace std;

    bool isBalance(string s){
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push('(');
        else {
         if(st.size()==0) return false; 
        else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){ 
    string s = "()(())(())";
    cout<<isBalance(s);
return 0;
}