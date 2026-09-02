#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void predeccor(Node * root){
    if (root == NULL || root->left == NULL) {
        cout << "No predecessor\n";
        return;
    }
    root = root->left;
    while(root->right!=NULL){
        root = root->right;
    }
    cout<<root->val<<endl;
}
int main(){ 
    Node *a = new Node(10);   // root node
    Node *b = new Node(5);
    Node *c = new Node(21);
    Node *d = new Node(4);
     Node *e = new Node(7);
    Node *f = new Node(15);
    a->left=b;
    a->right=c;
    b->left = d;
    b->right = e;
    c->left = f;

    predeccor(c);
return 0;
}