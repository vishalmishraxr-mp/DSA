#include<iostream>
using namespace std;

class Stack{
    public:
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;

void push(int val){
    if(idx==n) return;   // stack is overflow
    idx++;
    arr[idx] = val;
    }
int pop(){
    if(idx==-1) return -1;  // stack is underflow
    int x = arr[idx];
    idx--;
    return x;
    }
};
int main(){ 
    Stack st;
    st.push(5);
    st.push(67);
    st.push(18);
    st.pop();
    st.push(9);
    
return 0;
}