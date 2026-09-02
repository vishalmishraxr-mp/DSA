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
void nth_level(Node * root, int curr, int level){

    if(root==NULL) return;
    // preorder traversal
    if(curr==level) cout<<root->val<<" ";   // printing
    nth_level(root->left,curr+1,level);    // left node
    nth_level(root->right,curr+1,level);   // right node
}
int main(){ 
    Node *a = new Node(4);   // root node
    Node *b = new Node(6);
    Node *c = new Node(1);
    Node *d = new Node(9);
    Node *e = new Node(3);
    Node *f = new Node(7);

    //       4
    //      / \
    //     6   1
    //    / \   \
    //   9   3   7
    a->left=b;
    a->right=c;
    b->left = d;
    b->right = e;
    c->left = f;

    nth_level(a,1,3);
    
return 0;
}