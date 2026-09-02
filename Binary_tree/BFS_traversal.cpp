#include<iostream>
#include<queue>
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
void BFS_traversal(Node* root){
     queue<Node*> q;
     q.push(root);
     while(q.size()>0){
         Node* temp = q.front();
         q.pop();
         cout<<temp->val<<" ";
         if(temp->left!=NULL) q.push(temp->left);
         if(temp->right!=NULL) q.push(temp->right);
     }
       cout<<"\n";
}
int main(){ 
    // level order traversal using queue called BFS
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
    
    BFS_traversal(a);
return 0;
}