#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void morrisTraversal(Node* root) {
    Node* curr = root;
    while (curr != NULL) {
        if (curr->left == NULL) {
            cout << curr->val << " ";
            curr = curr->right;
        }
        else {
            Node* pred = curr->left;
            while (pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }

            if (pred->right == NULL) {
                pred->right = curr;   // create thread
                curr = curr->left;
            }
            else {
                pred->right = NULL;   // remove thread
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
    }
}
int main() {

    Node* a = new Node(4);
    Node* b = new Node(2);
    Node* c = new Node(5);
    Node* d = new Node(1);
    Node* e = new Node(3);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;

    cout << "Morris Inorder Traversal: ";
    morrisTraversal(a);

    return 0;
}