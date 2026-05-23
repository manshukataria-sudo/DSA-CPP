#include <iostream>
using namespace std;
class Node {
   public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int minOfTree(Node* root) {
    if (root == NULL)
        return INT_MAX;
    return min(root->val, min(minOfTree(root->left), minOfTree(root->right)));
}
int main() {
    Node* a = new Node(-891);
    Node* b = new Node(0);
    Node* c = new Node(1009);
    Node* d = new Node(-84);
    Node* e = new Node(895);
    Node* f = new Node(1);
    Node* g = new Node(-1);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << minOfTree(a) << endl;
    cout << minOfTree(b) << endl;
    cout << minOfTree(c) << endl;
    cout << minOfTree(d) << endl;
    
}