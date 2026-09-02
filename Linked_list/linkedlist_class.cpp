#include<iostream>
using namespace std;

class Node{  // user define data type
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
class LinkedList{    // user define data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    // insert at the end of a linked list
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;  
        }
        size++;
    } 
    // insert at the begining of a linked list
    void insertAtBeg(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    // insert at the given position
    void insertAtPos(int val, int pos){
        if(pos==0) insertAtBeg(val);
        else if(pos==size) insertAtEnd(val);
        else{
            Node* newnode = new Node(val);
            Node* temp = head;
            for(int i=1;i<=pos-1;i++){  
                temp = temp->next;
            }
            newnode->next = temp->next;
                temp->next = newnode;
                size++;
        }
    }
    // delete a node at the beginning
    void deleteAtBeg(){
        if(size==0) {
            cout<<"linked list is empty\n";
        }
        else{
            head = head->next;
            size--;
        }
    }
    // delete a node at the end
    void deleteAtEnd(){
        if(size==0) {
            cout<<"linked list is empty\n";
        }
        // else{
        //     Node* temp = head;
        //     while(temp->next->next!=NULL){
        //         temp = temp->next;
        //     }
        //     temp->next = NULL;
        //     size--;
        // }
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    // delete at given index
    void deleteAtPos(int pos){
        if(pos<0 || pos>=size){
            cout<<"linked list is empty\n";
        }
        else if(pos==0) deleteAtBeg();
        else if(pos == size-1) deleteAtEnd();
        else{
            Node* temp = head;
            for(int i=1;i<pos;i++){
                 temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    // print the value at given index
    int getAtPos(int pos){
        if(pos<0 || pos>=size){
            cout<<"invalid index"<<endl;
            return -1;
        }
        else if(pos==0) return head->val;
        else if(pos==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=pos;i++){
               temp = temp->next;
            }
            return temp->val;
            size++;
        }
    }
    void dispaly(){
        Node* temp =  head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){ 
     LinkedList ll;
     ll.insertAtEnd(10);
     ll.insertAtEnd(20);
     ll.insertAtEnd(30);
     ll.insertAtEnd(40);
     ll.dispaly();
     ll.insertAtBeg(5);
     ll.dispaly();
     ll.insertAtPos(15,2);
     ll.dispaly();
     cout<<ll.getAtPos(3)<<endl;
     cout<<ll.size<<endl;
    //  ll.deleteAtBeg();
    //  ll.dispaly();
    //  ll.deleteAtEnd();
    //  ll.dispaly();
     ll.deleteAtPos(3);
     ll.dispaly();
     
return 0;
}


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
// void display(Node* head){
//     Node *temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// int size(Node* head){
//     Node *temp = head;
//     int count = 0;
//     while(temp!=NULL){
//         count++;
//         temp = temp->next;
//     }
//     cout<<count<<endl;
//     return 0;
// }
// // insert at the end of a linked list
// void insertAtend(Node* head, int val){
//     Node* newNode = new Node(val);
//     while(head->next!=NULL) head = head->next;
//     head->next = newNode;
// }
// int main(){ 
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     display(a);
//     insertAtend(a,50);
//     insertAtend(a,60);
//     display(a);
//     size(a);
// return 0;
// }