#include <iostream>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
void display(Node* root) {
    if (root == NULL) {
        return;
    }
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
Node* constructBST(vector<int>& inorder, int lo, int hi) {
    if (lo > hi) {
        return NULL;
    }
    int mid = lo + (hi - lo) / 2;
    Node* root = new Node(inorder[mid]);
    root->left = constructBST(inorder, lo, mid - 1);
    root->right = constructBST(inorder, mid + 1, hi);
    return root;
}
int main() {
    vector<int> inorder = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    Node* root = constructBST(inorder, 0, inorder.size() - 1);
    display(root);

    int lo = 11, hi = 14;
    
}