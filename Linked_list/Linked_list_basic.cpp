// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int val;
//         Node* next;
//         Node(int val){
//             this->val = val;
//             this->next = NULL;
//         }
// };
// int main(){ 
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     // cout<<(*((*((*(a.next)).next)).next)).val<<endl;
//     // cout<<a.next->next->next->val<<endl;
//     Node temp = a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next == NULL) break;
//         temp = *(temp.next);
//     }
// return 0;
// }


// using pointer
#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void display(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// display with the help of recursion
void displayrec(Node* head){
    if(head==NULL) return;   // base case
        cout<<head->val<<" ";  // printing
        displayrec(head->next);   // function calling
    }
// if we want reverse print then call first then print in recursion 
void displayrec_reverse(Node* head){
    if(head==NULL) return;   // base case
    displayrec_reverse(head->next);   // function calling
        cout<<head->val<<" ";  // printing
    }
int size(Node* head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    cout<<count<<endl;
    return 0;
}
int main(){ 
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    // display(a);
    // size(a);
    displayrec(a);
    cout<<endl;
    displayrec_reverse(a);
return 0;
}