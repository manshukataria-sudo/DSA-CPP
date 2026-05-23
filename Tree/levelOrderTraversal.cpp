#include <iostream>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
int level(Node* root) {
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}
void nthLevel(Node* root, int currLevel, int level) {
    if (root == NULL)
        return;
    if (level == currLevel) {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, currLevel + 1, level);
    nthLevel(root->right, currLevel + 1, level);
}
void nthLevelRev(Node* root, int currLevel, int level) {
    if (root == NULL)
        return;
    if (level == currLevel) {
        cout << root->val << " ";
        return;
    }
    nthLevelRev(root->right, currLevel + 1, level);
    nthLevelRev(root->left, currLevel + 1, level);
}
void levelOrder(Node* root) {
    int maxLevel = level(root);
    for (int i = 1; i <= maxLevel; i++) {
        nthLevel(root, 1, i);
    }
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelOrder(a);
    cout << endl;
    nthLevelRev(a, 1, 3);
}