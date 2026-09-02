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

void successor(Node * root){
    if (root == NULL || root->right == NULL) {
        cout << "No successor\n";
        return;
    }
    root = root->right;
    while(root->left!=NULL){
        root = root->left;
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

    successor(b);
return 0;
}