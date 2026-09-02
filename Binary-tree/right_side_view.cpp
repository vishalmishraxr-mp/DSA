// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// // construct the tree from array
// Node * construct(int arr[], int n){
//     queue<Node*> q;
//     Node * root = new Node(arr[0]);
//     q.push(root);
//     int i = 1;
//     int j = 2;
//     while(q.size()>0 && i<n){
//         Node* temp = q.front();
//         q.pop();
//         Node* l;
//         Node* r;
//         if(arr[i]!=INT_MIN) l = new Node(arr[i]);
//         else l = NULL;
//         if( j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
//         else r = NULL;

//         temp->left = l;
//         temp->right = r;

//          if(l!=NULL) q.push(l);
//          if(r!=NULL) q.push(r);

//          i+=2;
//          j+=2;
//     }
//        return root;
// }
// int levels_tree(Node * root){
//     if(root==NULL) return 0;
//     return   1 + max(levels_tree(root->left) , levels_tree(root->right));
// }

//nth level print
// void nth_level(Node * root, int curr, int level,vector<int> & ans){

//     if(root==NULL) return;
//     // preorder traversal
//         if(curr==level ) {
//             ans[level] = root->val;
//             return;
//             } // printing
//     nth_level(root->left,curr+1,level,ans);    // left node
//     nth_level(root->right,curr+1,level,ans);   // right node
// }
// void level_traversal(Node * root, vector<int> & ans){
//     int n = ans.size();
//     for(int i=0;i<n;i++){
//         nth_level(root,0,i,ans);
//     }
// }
// vector<int> rightview(Node* root){
//     vector<int> ans(levels_tree(root),0);
//     level_traversal(root,ans);
//     return ans;
// }
// int main(){ 
   
//     int arr[] = {1,2,5,4,INT_MIN,6,9,INT_MIN,INT_MIN,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     Node* root = construct(arr,n);
//     vector<int> ans = rightview(root);

//     for(int x : ans){
//     cout << x << " ";
//     }

// return 0;
// }

// simple level order traversal hai bas arr e value store krte jao node ki 
// index = level pr or use reset krte rho tab aakhri value ho jayegi or phir 
// level inc hoga then again dusre level or sae hoga
//        1
//      /   \
//     2     5
//    /     / \
//   4     6   9
//       /   \   
//      7      8


/// preorder traversal ki help se
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

// construct the tree from array
Node * construct(int arr[], int n){
    queue<Node*> q;
    Node * root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if( j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

         if(l!=NULL) q.push(l);
         if(r!=NULL) q.push(r);

         i+=2;
         j+=2;
    }
       return root;
}
int levels_tree(Node * root){
    if(root==NULL) return 0;
    return   1 + max(levels_tree(root->left) , levels_tree(root->right));
}

// preorder ki help se left side view
void preorderleft(Node* root, vector<int> & ans, int level){
     if(root==NULL) return;
     ans[level] = root->val;
     preorderleft(root->right,ans,level+1);
     preorderleft(root->left,ans,level+1);
}

// preorder ki help se right side view
void preorderight(Node* root, vector<int> & ans, int level){
     if(root==NULL) return;
     ans[level] = root->val;
     preorderight(root->left,ans,level+1);
     preorderight(root->right,ans,level+1);
}
vector<int> rightview(Node* root){
    vector<int> ans(levels_tree(root),0);
    preorderight(root,ans,0);
    return ans;
}
vector<int>  leftview(Node* root){
    vector<int> ans(levels_tree(root),0);
    preorderleft(root,ans,0);
    return ans;
}
int main(){ 
   
    int arr[] = {1,2,5,4,INT_MIN,6,9,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    cout<<"right side view of a binary tree\n";
    vector<int> ans = rightview(root);
    for(int x : ans){
    cout << x << " ";
    }
    cout<<"\n";
    cout<<"left side view of a binary tree\n";
    vector<int> ansleft = leftview(root);
    for(int x : ansleft){
    cout << x << " ";
    }

return 0;
}