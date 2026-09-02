#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Stack{
    public:
    Node * head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int x){
        Node * temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            printf("stack is underflow\n");
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            printf("stack is underflow\n");
            return -1;
        }
        return head->val;
    }
    void display(){
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
};
int main(){ 
    Stack st;
    st.push(67);
    st.push(7);
    st.push(10);
    st.push(18);
    st.display();
    st.pop();
    st.push(1);
    st.push(56);
    st.display();

return 0;
}