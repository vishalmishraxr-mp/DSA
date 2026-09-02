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
Node* Node_deletion(Node* root, int key){
    if(root->val==key) {
        // case: 1 root with 0 child
        if(root->left==NULL  && root->right==NULL)  return NULL;

        // case:2 root with 1 child
        if(root->left==NULL  ||  root->right==NULL){
            if(root->left!=NULL) return root->left;
            else return root->right;
        }
    }
    else if(root->val>key){   // left me jao
        root->left = Node_deletion(root->left,key);
    }
    else // right me jao 
    root->right = Node_deletion(root->right,key);
    return root;
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
    predisplay(a);
    cout<<"\n";
    Node_deletion(a,21);
    predisplay(a);
return 0;
}