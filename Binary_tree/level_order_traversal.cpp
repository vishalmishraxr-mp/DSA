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
// find levels
int levels_tree(Node * root){
    if(root==NULL) return 0;
    return   1 + max(levels_tree(root->left) , levels_tree(root->right));
}

//nth level print
void nth_level(Node * root, int curr, int level){

    if(root==NULL) return;
    // preorder traversal
    if(curr==level ) {
        cout<<root->val<<" ";  
        return;
     } // printing
    nth_level(root->left,curr+1,level);    // left node
    nth_level(root->right,curr+1,level);   // right node
}
void level_traversal(Node * root){
    int n = levels_tree(root);
    for(int i=1;i<=n;i++){
        nth_level(root,1,i);
    }
}
//----------------------------------------
void nth_level_rev(Node * root, int curr, int level){

    if(root==NULL) return;
    // preorder traversal
    if(curr==level) {
        cout<<root->val<<" ";  
        return;
     } // printing
     nth_level_rev(root->right,curr+1,level);   // right node ko phale call krdo
     nth_level_rev(root->left,curr+1,level);    // left node
}
// loop lagao nth levels ko print kara do
void level_traversal_rev(Node * root){
    int n = levels_tree(root);
    for(int i=1;i<=n;i++){
        nth_level_rev(root,1,i);
    }
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

    level_traversal(a);
    cout<<"\n";
    level_traversal_rev(a);
    
return 0;
}