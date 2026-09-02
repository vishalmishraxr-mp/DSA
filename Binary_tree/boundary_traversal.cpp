#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// construct the tree from array
Node *construct(int arr[], int n)
{
    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() > 0 && i < n)
    {
        Node *temp = q.front();
        q.pop();
        Node *l;
        Node *r;
        if (arr[i] != INT_MIN)
            l = new Node(arr[i]);
        else
            l = NULL;
        if (j != n && arr[j] != INT_MIN)
            r = new Node(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;

        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

// left bounary print krne ke liye 
void left_boundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    left_boundary(root->left);
    if(root->left==NULL) left_boundary(root->right);

}
// right boundary print krne ke liye 
void right_boundary(Node* root){
    // root = root->right;
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right==NULL) right_boundary(root->left);
    right_boundary(root->right);   
    cout<<root->val<<" ";    // right boundary ko ulta print krna hai 
    // isiliye printing call bad me kr di
}

// leaf node print krne ke liye
void leaf_node(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leaf_node(root->left);
    leaf_node(root->right);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, 
                INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16,
                 INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN,
                 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = construct(arr, n);

    left_boundary(root); 
    leaf_node(root);
    right_boundary(root->right); // bcz left or right dono me root node print ho jayega

    return 0;
}