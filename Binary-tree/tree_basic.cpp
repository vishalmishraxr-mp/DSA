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
void predisplay(Node * root){

    if(root==NULL) return;

    // preorder traversal
    cout<<root->val<<" ";   // printing
    predisplay(root->left);    // left node
    predisplay(root->right);   // right node
}
void indisplay(Node * root){

    if(root==NULL) return;

    // inorder traversal
    indisplay(root->left);    // left node
    cout<<root->val<<" ";   // printing
    indisplay(root->right);   // right node
}
void postdisplay(Node * root){

    if(root==NULL) return;
    // postorder traversal
    postdisplay(root->left);    // left node
    postdisplay(root->right);   // right node
    cout<<root->val<<" ";   // printing
}
int main(){ 
    Node *a = new Node(4);   // root node
    Node *b = new Node(6);
    Node *c = new Node(1);
    Node *d = new Node(9);
     Node *e = new Node(3);
    Node *f = new Node(7);
    a->left=b;
    a->right=c;
    b->left = d;
    b->right = e;
    c->left = f;
    predisplay(a);
    cout<<"\n";
    postdisplay(a);
    cout<<"\n";
    indisplay(a);
return 0;
}