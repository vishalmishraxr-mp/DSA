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
int sum = 0;
int sum_all_nodes(Node * root){
    if(root==NULL) return 0;
    sum =  root->val + sum_all_nodes(root->left) + sum_all_nodes(root->right);
    return sum;
}

// size of tree
int size = 0;
int size_tree(Node * root){
    if(root==NULL) return 0;
    size =  1 + size_tree(root->left) + size_tree(root->right);
    return size;
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
    cout<<sum_all_nodes(a)<<endl;
    cout<<size_tree(a)<<endl;
return 0;
}