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
//  max value of node in tree
int maxi = 0;
int max_size_node(Node * root){
    if(root==NULL) return INT_MIN;
    maxi =  max(root->val ,max( max_size_node(root->left) , max_size_node(root->right)));
    return maxi;
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
    cout<<max_size_node(a)<<endl;
return 0;
}