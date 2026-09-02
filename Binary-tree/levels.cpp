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
int levels = 0;
int levels_tree(Node * root){
    if(root==NULL) return 0;
    levels =  1 + max(levels_tree(root->left) , levels_tree(root->right));
    return levels;
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
    cout<<levels_tree(a)<<endl;
return 0;
}