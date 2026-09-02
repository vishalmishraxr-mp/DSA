#include<iostream> 
#include<queue>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
            Node(int val){
                this->val = val;
            }
};
int sizeTree(Node* root){
    if(root==NULL) return 0;
    return 1 + sizeTree(root->left) + sizeTree(root->right);
}
// hceck the given tree is max heap or not
bool isMaxheap(Node* root){
    if(root==NULL) return true;
    if(root->right!=NULL){
        if(root->val<root->right->val) return false;
    }
    if(root->left!=NULL){
        if(root->val<root->left->val) return false;
    }
    return (isMaxheap(root->left) && isMaxheap(root->right));
}
bool isCBT(Node* root){
    if(root == NULL) return true;
    queue<Node*> q;
    q.push(root);
    bool nullFound = false;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            nullFound = true;
        }
        else{
            if(nullFound) return false;
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return true;
}
int main(){ 
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;

    if(isCBT(a) && isMaxheap(a)) cout<<"tree is max heap";
    else cout<<"tree is not the max heap";
return 0;
}